#include <QFile>
#include <QTextStream>

#include "settingwlan.h"
#include "ui_settingwlan.h"
#include "config.h"



settingWLAN::settingWLAN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingWLAN)
{
    ui->setupUi(this);
    this->virtualKeyBoard = new WidgetKeyboard(this);
}

settingWLAN::~settingWLAN()
{
    delete ui;
}

void settingWLAN::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void settingWLAN::getAPinfo(int id)
{
    this->id=id;

    char cmd[100];
    sprintf(cmd, "ap.sh getAPinfo %d", this->id);
    system(cmd);
    /*
    std::ifstream inAPinfo("/tmp/ap_info_file_tmp", std::ios::in);

    char address[100], essid[100], dhcp[100], ip[100], gw[100], netmask[100], dns[100];
    ip[0]='\0';
    gw[0]='\0';
    dhcp[0]='\0';
    netmask[0]='\0';
    dns[0]='\0';
    */

    QFile tempFile(AP_INFO_FILE);
    tempFile.open(QIODevice::ReadOnly);
    QTextStream inAPinfo(&tempFile);
    QString address, essid, dhcp, ip, gw, netmask, dns;
    //const QString static="static"

    inAPinfo >> address >> essid >> dhcp >> ip >> gw >> netmask >> dns;

    this->address=address;

    //printf("essid=%s\n", essid);
    ui->labelEssid->setText(essid);
    if (dhcp != "static") {
        ui->radioButtondhcp->setChecked(true);
    } else {
        ui->radioButtonStaticIP->setChecked(true);
        ui->lineEditIP->setText(ip);
        ui->lineEditGateway->setText(gw);
        ui->lineEditNetmask->setText(netmask);
        ui->lineEditDNS->setText(dns);
    }
}

void settingWLAN::setAPinfo()
{
    QFile tempFile("/tmp/wirelessAPtemp");
    if (!tempFile.open(QIODevice::WriteOnly| QIODevice::Truncate))
        return;
    QTextStream ts(&tempFile);

    ts << this->address << " ";
    if (ui->lineEditKey->text() != NULL) {
        ts << ui->lineEditKey->text() << " ";
    } else {
        ts << "* ";
    }

    //char key[100];
    //std::string key;
    //key=ui->lineEditKey->text().toAscii();
    //printf("key=%s\n", key);
    if(ui->radioButtondhcp->isChecked()) {
        ts << "dhcp" << " " << endl << flush;
    } else {
        ts << "static" << " " << ui->lineEditIP->text() << " " << ui->lineEditGateway->text() << " " << ui->lineEditNetmask->text() << " " << ui->lineEditDNS->text() << endl << flush;
    }
    tempFile.close();

    system("ap.sh setAPinfo");
}

void settingWLAN::apply()
{
    setAPinfo();
}

void settingWLAN::cancel()
{
    if(this->virtualKeyBoard->isVisible()){
        this->virtualKeyBoard->hide();
    }
    this->hide();
}

void settingWLAN::ok()
{
    setAPinfo();
    if(this->virtualKeyBoard->isVisible()){
        this->virtualKeyBoard->hide();
    }
    this->hide();
}

void settingWLAN::checkstatic()
{
    ui->radioButtonStaticIP->setChecked(true);
}

void settingWLAN::keyboard()
{
    if(this->virtualKeyBoard->isVisible()){
        this->virtualKeyBoard->hide();
    }else{
        this->virtualKeyBoard->show();
    }
}
