#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QTextBrowser>
#include <QTableView>
#include "qfiledialog.h"
#include "qdebug.h"
#include "about.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_File_triggered();

    void on_actionSave_All_triggered();

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButton_clicked();

    void updateTab();

    void saveData(QString filename, const QTextBrowser *textData);

    void on_pushButton_2_clicked();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    about *aboutWin;

};

#endif // MAINWINDOW_H
