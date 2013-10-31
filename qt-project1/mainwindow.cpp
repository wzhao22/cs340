#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::on_pushButton_clicked
 */
void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton 1 has been clicked " << std::endl;
}

/**
 * @brief MainWindow::on_pushButton_2_clicked
 * @param checked
 */
void MainWindow::on_pushButton_2_clicked(bool checked)
{
    std::cout << "pushbutton 2 has been clicked" << std::endl;
}

/**
 * @brief MainWindow::on_checkBox_clicked
 * @param checked
 */
void MainWindow::on_checkBox_clicked(bool checked)
{
    if (checked){
        std::cout << "here's the soup" << std::endl;
    }
    else{
        std::cout << "no soup for you!" << std::endl;
    }
}
