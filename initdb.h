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

#ifndef INITDB_H
#define INITDB_H

#include <QtSql>
#include <QFile>
#include <QTextStream>

#include "config.h"

void addAP(QSqlQuery &q, const QString &address, const QString &essid, const QString &encryption,
             const QString &key, int rating)
{
    q.addBindValue(address);
    q.addBindValue(essid);
    q.addBindValue(encryption);
    q.addBindValue(key);
    q.addBindValue(rating);
    q.exec();
}

void readAP(QSqlQuery q)
{
    system("ap.sh scanning");

    QFile tempFile(AP_FILE);
    tempFile.open(QIODevice::ReadOnly);
    QTextStream inAPfile(&tempFile);
    QString address, essid, encryption, key;
    //int rating1, rating2;

    //while(!(inAPfile >> address >> essid >> encryption >> key >> rating1 >> rating2).atEnd()) {
    while(!(inAPfile >> address >> essid >> encryption >> key).atEnd()) {
        //rating1=5*rating1/rating2;
        addAP(q, address, essid, encryption, key, 0);
    }
}


QSqlError initDb()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(":memory:");

    if (!db.open())
        return db.lastError();

    QStringList tables = db.tables();
    if (tables.contains("books", Qt::CaseInsensitive)
        && tables.contains("authors", Qt::CaseInsensitive))
        return QSqlError();

    QSqlQuery q;
    if (!q.exec(QLatin1String("create table WirelessaccessPoint(id integer primary key, Address varchar, essid varchar, encryption varchar, key varchar, rating integer)")))
        return q.lastError();

    if (!q.prepare(QLatin1String("insert into WirelessAccessPoint(Address, essid, encryption, key, rating) values(?, ?, ?, ?, ?)")))
        return q.lastError();
    readAP(q);

    return QSqlError();
}

#endif
