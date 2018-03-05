/**
 ** @author:	   浓咖啡
 ** @date:	   2016.12.8
 ** @brief:      导航栏
 */
#ifndef NAVBAR_H
#define NAVBAR_H

#include "basebutton.h"

class Navbar : public QWidget
{
    Q_OBJECT
public:
    explicit Navbar(QWidget *parent = 0, int h = 30);
    explicit Navbar(int w, int h, BaseButton *leftbtn, \
                    QLabel *centerLab, BaseButton *rightbtn, QWidget *parent = 0);
    void hideLBtn(){leftbtn->hide();}
    void hideRBtn(){rightbtn->hide();}

    void setLBtn(BaseButton *btn);
    void setRBtn(BaseButton *btn);

    void setTitle(const QString &str){centerLab->setText(str);}

signals:
    void lBtnSig();
    void rBtnSig();

protected:
    BaseButton *leftbtn;
    QLabel *centerLab;
    BaseButton *rightbtn;
    QHBoxLayout *lay;
};

#endif // NAVBAR_H
