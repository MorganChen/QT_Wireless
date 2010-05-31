#ifndef SETTINGWLAN_H
#define SETTINGWLAN_H

#include <QDialog>
#include "WidgetKeyboard.h"

namespace Ui {
    class settingWLAN;
}

class settingWLAN : public QDialog {
    Q_OBJECT
public:
    settingWLAN(QWidget *parent = 0);
    ~settingWLAN();

    void getAPinfo(int id);

public slots:
    void apply();
    void cancel();
    void ok();
    void checkstatic();
    void keyboard();

protected:
    void changeEvent(QEvent *e);

private:
    WidgetKeyboard *virtualKeyBoard;
    Ui::settingWLAN *ui;
    int id;
    QString address;
    QString essid;
    void setAPinfo();
};

#endif // SETTINGWLAN_H
