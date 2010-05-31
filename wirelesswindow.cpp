/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the demonstration applications of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

#include "wirelesswindow.h"
#include "wifidelegate.h"
#include "initdb.h"
#include "config.h"

#include <QtSql>

wirelessWindow::wirelessWindow()
{
    ui.setupUi(this);

    if (!QSqlDatabase::drivers().contains("QSQLITE"))
        QMessageBox::critical(this, "Unable to load database", "This demo needs the SQLITE driver");

    // initialize the database
    QSqlError err = initDb();
    if (err.type() != QSqlError::NoError) {
        showError(err);
        return;
    }

    // Create the data model
    model = new QSqlRelationalTableModel(ui.wifiTable);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("WirelessAccessPoint");


    model->setHeaderData(model->fieldIndex("essid"), Qt::Horizontal, tr("ESSID"));
    model->setHeaderData(model->fieldIndex("encryption"), Qt::Horizontal, tr("Encyption"));
    model->setHeaderData(model->fieldIndex("rating"), Qt::Horizontal, tr("Rating"));

    // Populate the model
    if (!model->select()) {
        showError(model->lastError());
        return;
    }

    // Set the model and hide the ID column
    ui.wifiTable->setModel(model);
    ui.wifiTable->setItemDelegate(new wifiDelegate(ui.wifiTable));
    ui.wifiTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui.wifiTable->setColumnHidden(model->fieldIndex("id"), true);
    ui.wifiTable->setColumnHidden(model->fieldIndex("Address"), true);
    ui.wifiTable->setColumnHidden(model->fieldIndex("key"), true);
    ui.wifiTable->setSelectionMode(QAbstractItemView::SingleSelection);


    QDataWidgetMapper *mapper = new QDataWidgetMapper(this);
    mapper->setModel(model);

    ui.wifiTable->setCurrentIndex(model->index(0, 0));
    ui.wifiTable->setColumnWidth(2, 415);
    ui.wifiTable->setColumnWidth(3, 100);
    ui.wifiTable->setColumnWidth(5, 80);

    ui.tabWidget->setTabEnabled(1, false);

    ui.tabWidget->setVisible(false);

    ui.pushButtonSetting->setVisible(false);

    ui.Lab_WirelessBg->setGeometry(0,0,800,480);
    ui.Lab_WirelessBg->lower();

    setting.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

}

void wirelessWindow::showError(const QSqlError &err)
{
    QMessageBox::critical(this, "Unable to initialize Database",
                "Error initializing database: " + err.text());
}

void wirelessWindow::clickExit()
{
    this->close();
    this->destroy();
}

void wirelessWindow::clickConnect()
{
    char a[30];

    int i=ui.wifiTable->currentIndex().row()+1;
    ui.pushButtonConnect->setText("Connecting");

    sprintf(a, "ap.sh connect %d",i);
    system(a);

    if(isWifiConnected()) {
        ui.pushButtonConnect->setText("Connected");
    } else {
        ui.pushButtonConnect->setText("NotConnected");
    }

    //system("ap.sh dlink");
}
void wirelessWindow::clickSetting()
{
    setting.getAPinfo(ui.wifiTable->currentIndex().row()+1);
    setting.setWindowFlags(Qt::FramelessWindowHint);

    setting.show();

}
