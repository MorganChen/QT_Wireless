/********************************************************************************
** Form generated from reading ui file 'settingwlan.ui'
**
** Created: Mon May 31 14:13:09 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SETTINGWLAN_H
#define UI_SETTINGWLAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_settingWLAN
{
public:
    QLabel *labelKey;
    QLineEdit *lineEditKey;
    QRadioButton *radioButtondhcp;
    QRadioButton *radioButtonStaticIP;
    QLabel *labelIP;
    QLabel *labelNetmask;
    QLabel *labelGateway;
    QLabel *labelDNS;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditGateway;
    QLineEdit *lineEditNetmask;
    QLineEdit *lineEditDNS;
    QLabel *labelAP;
    QLabel *labelEssid;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonKeyBoard;

    void setupUi(QDialog *settingWLAN)
    {
        if (settingWLAN->objectName().isEmpty())
            settingWLAN->setObjectName(QString::fromUtf8("settingWLAN"));
        settingWLAN->resize(800, 480);
        QFont font;
        font.setPointSize(18);
        settingWLAN->setFont(font);
        labelKey = new QLabel(settingWLAN);
        labelKey->setObjectName(QString::fromUtf8("labelKey"));
        labelKey->setGeometry(QRect(90, 130, 61, 41));
        QFont font1;
        font1.setPointSize(16);
        labelKey->setFont(font1);
        lineEditKey = new QLineEdit(settingWLAN);
        lineEditKey->setObjectName(QString::fromUtf8("lineEditKey"));
        lineEditKey->setGeometry(QRect(250, 140, 391, 41));
        radioButtondhcp = new QRadioButton(settingWLAN);
        radioButtondhcp->setObjectName(QString::fromUtf8("radioButtondhcp"));
        radioButtondhcp->setGeometry(QRect(30, 190, 101, 31));
        radioButtondhcp->setFont(font1);
        radioButtonStaticIP = new QRadioButton(settingWLAN);
        radioButtonStaticIP->setObjectName(QString::fromUtf8("radioButtonStaticIP"));
        radioButtonStaticIP->setGeometry(QRect(30, 250, 191, 23));
        radioButtonStaticIP->setFont(font1);
        labelIP = new QLabel(settingWLAN);
        labelIP->setObjectName(QString::fromUtf8("labelIP"));
        labelIP->setGeometry(QRect(90, 290, 51, 31));
        labelIP->setFont(font1);
        labelNetmask = new QLabel(settingWLAN);
        labelNetmask->setObjectName(QString::fromUtf8("labelNetmask"));
        labelNetmask->setEnabled(true);
        labelNetmask->setGeometry(QRect(90, 390, 121, 31));
        labelNetmask->setFont(font1);
        labelGateway = new QLabel(settingWLAN);
        labelGateway->setObjectName(QString::fromUtf8("labelGateway"));
        labelGateway->setGeometry(QRect(90, 340, 131, 31));
        labelGateway->setFont(font1);
        labelDNS = new QLabel(settingWLAN);
        labelDNS->setObjectName(QString::fromUtf8("labelDNS"));
        labelDNS->setGeometry(QRect(90, 430, 161, 41));
        labelDNS->setFont(font1);
        lineEditIP = new QLineEdit(settingWLAN);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        lineEditIP->setGeometry(QRect(260, 280, 381, 41));
        lineEditGateway = new QLineEdit(settingWLAN);
        lineEditGateway->setObjectName(QString::fromUtf8("lineEditGateway"));
        lineEditGateway->setGeometry(QRect(260, 330, 381, 41));
        lineEditNetmask = new QLineEdit(settingWLAN);
        lineEditNetmask->setObjectName(QString::fromUtf8("lineEditNetmask"));
        lineEditNetmask->setGeometry(QRect(260, 380, 381, 41));
        lineEditDNS = new QLineEdit(settingWLAN);
        lineEditDNS->setObjectName(QString::fromUtf8("lineEditDNS"));
        lineEditDNS->setGeometry(QRect(260, 430, 381, 41));
        labelAP = new QLabel(settingWLAN);
        labelAP->setObjectName(QString::fromUtf8("labelAP"));
        labelAP->setGeometry(QRect(60, 90, 101, 31));
        labelAP->setFont(font1);
        labelEssid = new QLabel(settingWLAN);
        labelEssid->setObjectName(QString::fromUtf8("labelEssid"));
        labelEssid->setGeometry(QRect(160, 90, 481, 41));
        labelEssid->setFont(font1);
        pushButtonApply = new QPushButton(settingWLAN);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));
        pushButtonApply->setGeometry(QRect(660, 220, 131, 51));
        pushButtonCancel = new QPushButton(settingWLAN);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(660, 130, 131, 51));
        pushButtonOK = new QPushButton(settingWLAN);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(740, 0, 61, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOK->setIcon(icon);
        pushButtonOK->setIconSize(QSize(60, 60));
        pushButtonKeyBoard = new QPushButton(settingWLAN);
        pushButtonKeyBoard->setObjectName(QString::fromUtf8("pushButtonKeyBoard"));
        pushButtonKeyBoard->setGeometry(QRect(690, 400, 91, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/keyboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonKeyBoard->setIcon(icon1);
        pushButtonKeyBoard->setIconSize(QSize(64, 64));

        retranslateUi(settingWLAN);
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), settingWLAN, SLOT(cancel()));
        QObject::connect(pushButtonOK, SIGNAL(clicked()), settingWLAN, SLOT(ok()));
        QObject::connect(lineEditIP, SIGNAL(cursorPositionChanged(int,int)), settingWLAN, SLOT(checkstatic()));
        QObject::connect(lineEditGateway, SIGNAL(cursorPositionChanged(int,int)), settingWLAN, SLOT(checkstatic()));
        QObject::connect(lineEditNetmask, SIGNAL(cursorPositionChanged(int,int)), settingWLAN, SLOT(checkstatic()));
        QObject::connect(lineEditDNS, SIGNAL(cursorPositionChanged(int,int)), settingWLAN, SLOT(checkstatic()));
        QObject::connect(pushButtonKeyBoard, SIGNAL(clicked()), settingWLAN, SLOT(keyboard()));
        QObject::connect(pushButtonApply, SIGNAL(clicked()), settingWLAN, SLOT(apply()));

        QMetaObject::connectSlotsByName(settingWLAN);
    } // setupUi

    void retranslateUi(QDialog *settingWLAN)
    {
        labelKey->setText(QApplication::translate("settingWLAN", "Key", 0, QApplication::UnicodeUTF8));
        radioButtondhcp->setText(QApplication::translate("settingWLAN", "DHCP", 0, QApplication::UnicodeUTF8));
        radioButtonStaticIP->setText(QApplication::translate("settingWLAN", "Static IP", 0, QApplication::UnicodeUTF8));
        labelIP->setText(QApplication::translate("settingWLAN", "IP", 0, QApplication::UnicodeUTF8));
        labelNetmask->setText(QApplication::translate("settingWLAN", "Netmask", 0, QApplication::UnicodeUTF8));
        labelGateway->setText(QApplication::translate("settingWLAN", "Gateway", 0, QApplication::UnicodeUTF8));
        labelDNS->setText(QApplication::translate("settingWLAN", "DNS server", 0, QApplication::UnicodeUTF8));
        labelAP->setText(QApplication::translate("settingWLAN", "ESSID", 0, QApplication::UnicodeUTF8));
        labelEssid->setText(QString());
        pushButtonApply->setText(QApplication::translate("settingWLAN", "Apply", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("settingWLAN", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QString());
        pushButtonKeyBoard->setText(QString());
        Q_UNUSED(settingWLAN);
    } // retranslateUi

};

namespace Ui {
    class settingWLAN: public Ui_settingWLAN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGWLAN_H
