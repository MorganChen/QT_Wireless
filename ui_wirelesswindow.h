/********************************************************************************
** Form generated from reading ui file 'wirelesswindow.ui'
**
** Created: Mon May 31 14:08:11 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIRELESSWINDOW_H
#define UI_WIRELESSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wirelessWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabWifi;
    QPushButton *pushButtonExit;
    QLabel *Lab_WirelessBg;
    QTableView *wifiTable;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonSetting;
    QLabel *label;

    void setupUi(QMainWindow *wirelessWindow)
    {
        if (wirelessWindow->objectName().isEmpty())
            wirelessWindow->setObjectName(QString::fromUtf8("wirelessWindow"));
        wirelessWindow->resize(800, 480);
        wirelessWindow->setContextMenuPolicy(Qt::NoContextMenu);
        wirelessWindow->setWindowTitle(QString::fromUtf8(""));
#ifndef QT_NO_TOOLTIP
        wirelessWindow->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        wirelessWindow->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        wirelessWindow->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
        centralWidget = new QWidget(wirelessWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(330, 10, 141, 21));
        tabWidget->setIconSize(QSize(70, 70));
        tabWifi = new QWidget();
        tabWifi->setObjectName(QString::fromUtf8("tabWifi"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/wifi.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabWifi, icon, QString());
        pushButtonExit = new QPushButton(centralWidget);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(20, 80, 128, 128));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/lincity-ng.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonExit->setIcon(icon1);
        pushButtonExit->setIconSize(QSize(128, 128));
        pushButtonExit->setFlat(true);
        Lab_WirelessBg = new QLabel(centralWidget);
        Lab_WirelessBg->setObjectName(QString::fromUtf8("Lab_WirelessBg"));
        Lab_WirelessBg->setGeometry(QRect(100, 80, 671, 361));
        Lab_WirelessBg->setPixmap(QPixmap(QString::fromUtf8(":/IMG_7532-LoMo.jpg")));
        wifiTable = new QTableView(centralWidget);
        wifiTable->setObjectName(QString::fromUtf8("wifiTable"));
        wifiTable->setGeometry(QRect(160, 80, 611, 361));
        wifiTable->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 100);"));
        wifiTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 40, 351, 41));
        QFont font;
        font.setPointSize(20);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(20, 250, 128, 128));
        QFont font1;
        font1.setPointSize(12);
        pushButtonConnect->setFont(font1);
        pushButtonConnect->setAutoFillBackground(false);
        pushButtonConnect->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 100);"));
        pushButtonSetting = new QPushButton(centralWidget);
        pushButtonSetting->setObjectName(QString::fromUtf8("pushButtonSetting"));
        pushButtonSetting->setGeometry(QRect(490, 10, 131, 21));
        pushButtonSetting->setFont(font1);
        pushButtonSetting->setAutoFillBackground(false);
        pushButtonSetting->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 100);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 71, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/wifi.png")));
        wirelessWindow->setCentralWidget(centralWidget);

        retranslateUi(wirelessWindow);
        QObject::connect(pushButtonExit, SIGNAL(clicked()), wirelessWindow, SLOT(clickExit()));
        QObject::connect(pushButtonSetting, SIGNAL(clicked()), wirelessWindow, SLOT(clickSetting()));
        QObject::connect(pushButtonConnect, SIGNAL(clicked()), wirelessWindow, SLOT(clickConnect()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(wirelessWindow);
    } // setupUi

    void retranslateUi(QMainWindow *wirelessWindow)
    {
        tabWidget->setTabText(tabWidget->indexOf(tabWifi), QString());
        pushButtonExit->setText(QString());
        Lab_WirelessBg->setText(QString());
        groupBox->setTitle(QApplication::translate("wirelessWindow", "Wireless Access Point", 0, QApplication::UnicodeUTF8));
        pushButtonConnect->setText(QApplication::translate("wirelessWindow", "CONNECT", 0, QApplication::UnicodeUTF8));
        pushButtonSetting->setText(QApplication::translate("wirelessWindow", "Setting", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        Q_UNUSED(wirelessWindow);
    } // retranslateUi

};

namespace Ui {
    class wirelessWindow: public Ui_wirelessWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRELESSWINDOW_H
