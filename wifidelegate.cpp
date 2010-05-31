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

#include "wifidelegate.h"

#include <QtGui>

wifiDelegate::wifiDelegate(QObject *parent)
    : QSqlRelationalDelegate(parent), star(QPixmap(":images/star.png")), key(QPixmap(":images/key.jpg"))
{
}

void wifiDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                           const QModelIndex &index) const
{
    switch (index.column()) {
    case 3:
        {
            const QAbstractItemModel *model = index.model();
            QString encryption = model->data(index, Qt::DisplayRole).toString();
            if (encryption == "on"){
                //QPalette::ColorGroup cg = (option.state & QStyle::State_Enabled) ?
                //    (option.state & QStyle::State_Active) ? QPalette::Normal : QPalette::Inactive : QPalette::Disabled;

                //if (option.state & QStyle::State_Selected)
                //    painter->fillRect(option.rect, option.palette.color(cg, QPalette::Highlight));
                int height = key.height();
                int x = option.rect.x();
                int y = option.rect.y() + (option.rect.height() / 2) - (height / 2);
                painter->drawPixmap(x, y, key);
                drawFocus(painter, option, option.rect.adjusted(0, 0, -1, -1)); // since we draw the grid ourselves
            }
        }
        break;
    case 5:
        {
            const QAbstractItemModel *model = index.model();
            QPalette::ColorGroup cg = (option.state & QStyle::State_Enabled) ?
                (option.state & QStyle::State_Active) ? QPalette::Normal : QPalette::Inactive : QPalette::Disabled;

            if (option.state & QStyle::State_Selected)
                painter->fillRect(option.rect, option.palette.color(cg, QPalette::Highlight));

            int rating = model->data(index, Qt::DisplayRole).toInt();
            int width = star.width();
            int height = star.height();
            int x = option.rect.x();
            int y = option.rect.y() + (option.rect.height() / 2) - (height / 2);
            for (int i = 0; i < rating; ++i) {
                painter->drawPixmap(x, y, star);
                x += width;
            }
            drawFocus(painter, option, option.rect.adjusted(0, 0, -1, -1)); // since we draw the grid ourselves
        }
        break;
    default :
        {
            QStyleOptionViewItemV3 opt = option;
            opt.rect.adjust(0, 0, -1, -1); // since we draw the grid ourselves
            QSqlRelationalDelegate::paint(painter, opt, index);
        }
        break;
    }

    QPen pen = painter->pen();
    painter->setPen(option.palette.color(QPalette::Mid));
    painter->drawLine(option.rect.bottomLeft(), option.rect.bottomRight());
    painter->drawLine(option.rect.topRight(), option.rect.bottomRight());
    painter->setPen(pen);
}

QSize wifiDelegate::sizeHint(const QStyleOptionViewItem &option,
                                 const QModelIndex &index) const
{
    if (index.column() == 5)
        return QSize(5 * star.width(), star.height()) + QSize(1, 1);

    return QSqlRelationalDelegate::sizeHint(option, index) + QSize(1, 1); // since we draw the grid ourselves
}
