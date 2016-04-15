/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionSave_All;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *textBrowser_27;
    QWidget *tab_2;
    QTextBrowser *textBrowser_26;
    QWidget *tab_3;
    QTextBrowser *textBrowser_25;
    QWidget *tab_4;
    QTextBrowser *textBrowser_24;
    QWidget *tab_5;
    QTextBrowser *textBrowser_23;
    QWidget *tab_6;
    QTextBrowser *textBrowser_22;
    QWidget *tab_7;
    QTextBrowser *textBrowser_21;
    QWidget *tab_8;
    QTextBrowser *textBrowser_20;
    QWidget *tab_9;
    QTextBrowser *textBrowser_19;
    QWidget *tab_10;
    QTextBrowser *textBrowser_18;
    QWidget *tab_11;
    QTextBrowser *textBrowser_17;
    QWidget *tab_27;
    QTextBrowser *textBrowser_28;
    QWidget *tab_14;
    QTextBrowser *textBrowser_14;
    QWidget *tab_13;
    QTextBrowser *textBrowser_15;
    QWidget *tab_15;
    QTextBrowser *textBrowser_13;
    QWidget *tab_16;
    QTextBrowser *textBrowser_12;
    QWidget *tab_17;
    QTextBrowser *textBrowser_11;
    QWidget *tab_18;
    QTextBrowser *textBrowser_10;
    QWidget *tab_19;
    QTextBrowser *textBrowser_9;
    QWidget *tab_20;
    QTextBrowser *textBrowser_8;
    QWidget *tab_21;
    QTextBrowser *textBrowser_7;
    QWidget *tab_22;
    QTextBrowser *textBrowser_6;
    QWidget *tab_23;
    QTextBrowser *textBrowser_5;
    QWidget *tab_24;
    QTextBrowser *textBrowser_4;
    QWidget *tab_25;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_2;
    QWidget *tab_26;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1241, 719);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/open_folder_yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon);
        actionSave_All = new QAction(MainWindow);
        actionSave_All->setObjectName(QStringLiteral("actionSave_All"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/save_file_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_All->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(240, 10, 991, 471));
        tabWidget->setIconSize(QSize(15, 15));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textBrowser_27 = new QTextBrowser(tab);
        textBrowser_27->setObjectName(QStringLiteral("textBrowser_27"));
        textBrowser_27->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textBrowser_26 = new QTextBrowser(tab_2);
        textBrowser_26->setObjectName(QStringLiteral("textBrowser_26"));
        textBrowser_26->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        textBrowser_25 = new QTextBrowser(tab_3);
        textBrowser_25->setObjectName(QStringLiteral("textBrowser_25"));
        textBrowser_25->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        textBrowser_24 = new QTextBrowser(tab_4);
        textBrowser_24->setObjectName(QStringLiteral("textBrowser_24"));
        textBrowser_24->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        textBrowser_23 = new QTextBrowser(tab_5);
        textBrowser_23->setObjectName(QStringLiteral("textBrowser_23"));
        textBrowser_23->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        textBrowser_22 = new QTextBrowser(tab_6);
        textBrowser_22->setObjectName(QStringLiteral("textBrowser_22"));
        textBrowser_22->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        textBrowser_21 = new QTextBrowser(tab_7);
        textBrowser_21->setObjectName(QStringLiteral("textBrowser_21"));
        textBrowser_21->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        textBrowser_20 = new QTextBrowser(tab_8);
        textBrowser_20->setObjectName(QStringLiteral("textBrowser_20"));
        textBrowser_20->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        textBrowser_19 = new QTextBrowser(tab_9);
        textBrowser_19->setObjectName(QStringLiteral("textBrowser_19"));
        textBrowser_19->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        textBrowser_18 = new QTextBrowser(tab_10);
        textBrowser_18->setObjectName(QStringLiteral("textBrowser_18"));
        textBrowser_18->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        textBrowser_17 = new QTextBrowser(tab_11);
        textBrowser_17->setObjectName(QStringLiteral("textBrowser_17"));
        textBrowser_17->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_11, QString());
        tab_27 = new QWidget();
        tab_27->setObjectName(QStringLiteral("tab_27"));
        textBrowser_28 = new QTextBrowser(tab_27);
        textBrowser_28->setObjectName(QStringLiteral("textBrowser_28"));
        textBrowser_28->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_27, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        textBrowser_14 = new QTextBrowser(tab_14);
        textBrowser_14->setObjectName(QStringLiteral("textBrowser_14"));
        textBrowser_14->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_14, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        textBrowser_15 = new QTextBrowser(tab_13);
        textBrowser_15->setObjectName(QStringLiteral("textBrowser_15"));
        textBrowser_15->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_13, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        textBrowser_13 = new QTextBrowser(tab_15);
        textBrowser_13->setObjectName(QStringLiteral("textBrowser_13"));
        textBrowser_13->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_15, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        textBrowser_12 = new QTextBrowser(tab_16);
        textBrowser_12->setObjectName(QStringLiteral("textBrowser_12"));
        textBrowser_12->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_16, QString());
        tab_17 = new QWidget();
        tab_17->setObjectName(QStringLiteral("tab_17"));
        textBrowser_11 = new QTextBrowser(tab_17);
        textBrowser_11->setObjectName(QStringLiteral("textBrowser_11"));
        textBrowser_11->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_17, QString());
        tab_18 = new QWidget();
        tab_18->setObjectName(QStringLiteral("tab_18"));
        textBrowser_10 = new QTextBrowser(tab_18);
        textBrowser_10->setObjectName(QStringLiteral("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_18, QString());
        tab_19 = new QWidget();
        tab_19->setObjectName(QStringLiteral("tab_19"));
        textBrowser_9 = new QTextBrowser(tab_19);
        textBrowser_9->setObjectName(QStringLiteral("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_19, QString());
        tab_20 = new QWidget();
        tab_20->setObjectName(QStringLiteral("tab_20"));
        textBrowser_8 = new QTextBrowser(tab_20);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_20, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        textBrowser_7 = new QTextBrowser(tab_21);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_21, QString());
        tab_22 = new QWidget();
        tab_22->setObjectName(QStringLiteral("tab_22"));
        textBrowser_6 = new QTextBrowser(tab_22);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_22, QString());
        tab_23 = new QWidget();
        tab_23->setObjectName(QStringLiteral("tab_23"));
        textBrowser_5 = new QTextBrowser(tab_23);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_23, QString());
        tab_24 = new QWidget();
        tab_24->setObjectName(QStringLiteral("tab_24"));
        textBrowser_4 = new QTextBrowser(tab_24);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(0, 0, 991, 441));
        tabWidget->addTab(tab_24, QString());
        tab_25 = new QWidget();
        tab_25->setObjectName(QStringLiteral("tab_25"));
        textBrowser_3 = new QTextBrowser(tab_25);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 991, 441));
        pushButton_2 = new QPushButton(tab_25);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(870, 400, 93, 28));
        tabWidget->addTab(tab_25, QString());
        tab_26 = new QWidget();
        tab_26->setObjectName(QStringLiteral("tab_26"));
        textBrowser_2 = new QTextBrowser(tab_26);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 991, 451));
        pushButton = new QPushButton(tab_26);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(880, 400, 93, 28));
        tabWidget->addTab(tab_26, QString());
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 221, 471));
        MainWindow->setCentralWidget(centralWidget);
        textBrowser->raise();
        tabWidget->raise();
        pushButton->raise();
        textBrowser_2->raise();
        pushButton_2->raise();
        textBrowser_27->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1241, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionSave_All);
        menuAbout->addAction(actionAbout);
        mainToolBar->addAction(actionOpen_File);
        mainToolBar->addAction(actionSave_All);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(11);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Text File ", 0));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File...", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen_File->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Open a file to be process.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionSave_All->setText(QApplication::translate("MainWindow", "Save All..", 0));
#ifndef QT_NO_TOOLTIP
        actionSave_All->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Allow the user to save the data to a file.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("MainWindow", "About...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "A", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "B", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "C", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "D", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "E", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "F", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "G", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "H", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "I", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "J", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("MainWindow", "K", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_27), QApplication::translate("MainWindow", "L", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_14), QApplication::translate("MainWindow", "N", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QApplication::translate("MainWindow", "M", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_15), QApplication::translate("MainWindow", "O", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_16), QApplication::translate("MainWindow", "P", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_17), QApplication::translate("MainWindow", "Q", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_18), QApplication::translate("MainWindow", "R", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_19), QApplication::translate("MainWindow", "S", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_20), QApplication::translate("MainWindow", "T", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_21), QApplication::translate("MainWindow", "U", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_22), QApplication::translate("MainWindow", "V", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_23), QApplication::translate("MainWindow", "W", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_24), QApplication::translate("MainWindow", "X", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Save Data", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_25), QApplication::translate("MainWindow", "Y", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Save Data", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_26), QApplication::translate("MainWindow", "Z", 0));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
