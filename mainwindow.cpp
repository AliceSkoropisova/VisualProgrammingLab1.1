#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_label_2_linkActivated(const QString &link)
{
    ui->label_2->setText("frffff");
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "dfa", "sdfgwsdg");
}

