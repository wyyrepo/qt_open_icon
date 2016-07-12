/**
 ** @author:	   浓咖啡
 ** @date:	   2016.7.7
 ** @brief:      桌面组件
 */

#ifndef DESKTOP_H
#define DESKTOP_H

#include "qqprocedure.h"

class Desktop : public QWidget
{
    Q_OBJECT
public:
    explicit Desktop(QWidget *parent = 0);

signals:

private slots:
    void startSlot(bool);

private:
    QQProcedure *qq;
};

#endif // DESKTOP_H