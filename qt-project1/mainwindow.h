/**
* @file
* @author Luc Renambot
* @version 1.0
* @section LICENSE
*  blah blah
* @section DESCRIPTION
*  blah blah blah
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class
 *         of my application for project CS340.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     /**
      * Constructor for MainWindow
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /**
     * @brief on_pushButton_clicked
     */
    void on_pushButton_clicked();

    /**
     * @brief on_pushButton_2_clicked
     * this function prints out words.
     * @param checked
     */
    void on_pushButton_2_clicked(bool checked);
    /**
     * @brief on_checkBox_clicked
     * this function will print out 2 different messages
     * @param checked
     */
    void on_checkBox_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
