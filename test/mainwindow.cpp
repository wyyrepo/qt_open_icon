#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "buttontest.h"
#include "dialogtest.h"
#include "animationtest.h"
#include "wheeltest.h"
#include "toast.h"
#include "timetotal.h"
#include "desktop.h"
#include "listtest.h"
#include "digitalinputtest.h"
#include "progressbar2.h"
#include "databasetest.h"
#include "navbartest.h"
#include "labeltest.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("主窗体"));

#ifdef RUN_EMBEDDED
    #include <QWSServer>
    QWSServer::setCursorVisible(false);
#else
    this->move((qApp->desktop()->width()-width())/2, (qApp->desktop()->height()-height())/2);
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_labTest_clicked()
{
    LabelTest *w = new LabelTest;
    w->show();
}

void MainWindow::on_btnTest_clicked()
{
    ButtonTest *w = new ButtonTest;
    w->show();
}

void MainWindow::on_dialogTest_clicked()
{
    DialogTest *w = new DialogTest;
    w->show();
}

void MainWindow::on_animationTest_clicked()
{
    AnimationTest *w = new AnimationTest;
    w->show();
}

void MainWindow::on_wheelTest_clicked()
{
    if(QT_VERSION >= QT_VERSION_CHECK(5,0,0)){
        bool touch = qApp->arguments().contains(QLatin1String("--touch"));
        WheelTest *w = new WheelTest(touch);
        w->show();
    }else{
        Toast *toast = new Toast(this, "当前版本不支持");
        toast->toast();
    }
}

void MainWindow::on_timeSetTest_clicked()
{
    if(QT_VERSION >= QT_VERSION_CHECK(5,0,0)){
        TimeTotal *w = new TimeTotal;
        w->show();
    }else{
        Toast *toast = new Toast(this, "当前版本不支持");
        toast->toast();
    }
}

void MainWindow::on_deskTopTest_clicked()
{
    Desktop *w = new Desktop;
    w->show();
}

void MainWindow::on_listTest_clicked()
{
    ListTest *w = new ListTest;
    w->show();
}

void MainWindow::on_databaseTest_clicked()
{
    DatabaseTest *database = new DatabaseTest;
    database->test();
    return;
}

void MainWindow::on_progressBar2Test_clicked()
{
    ProgressBar2 *w = new ProgressBar2;
    w->show();
}

void MainWindow::on_digitalInputTest_clicked()
{
    DigitalInputTest *w = new DigitalInputTest;
    w->show();
}

void MainWindow::on_navBarTest_clicked()
{
    NavbarTest *w = new NavbarTest;
    w->show();
}
