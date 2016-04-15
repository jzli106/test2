#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qfiledialog.h"
#include "qdebug.h"
#include <QTableView>

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

void MainWindow::on_actionOpen_File_triggered()
{
    //open file

    // extracting file name
    //http://stackoverflow.com/questions/3648839/get-filename-from-qfile
    QString file = QFileDialog::getOpenFileName(this,"Open a File)","2600.txt");

    QStringList parts = file.split("/");
    QString lastBit = parts.at(parts.size()-1);


    if(!file.isEmpty())
    {

        QFile f(file);
        QFileInfo fileInfo(f.fileName());
        QString fileName = fileInfo.fileName();

        f.open(QFile::ReadOnly|QFile::Text);
        QTextStream in(&f);
        QString txt = in.readAll();

        qDebug() << file;
        qDebug() << fileName;
        qDebug() << lastBit;

        //ui->textBrowser->insertPlainText("File Name: " +  fileName + "\n");
        //ui->textBrowser->insertPlainText("write the stuff here");
        //ui->textBrowser->insertPlainText(txt);
        //ui->textBrowser->setText(txt);
        ui->textBrowser->insertPlainText("FileName:             "+fileName + "\n");
        ui->textBrowser->insertPlainText("Number of Words:      "+fileName + "\n");
        ui->textBrowser->insertPlainText("Number of Lines:      "+fileName + "\n");
        ui->textBrowser->insertPlainText("Number of Paragraphs: "+fileName + "\n");
        ui->textBrowser->insertPlainText("Reading Level:        "+fileName + "\n");
        ui->textBrowser->insertPlainText("\n===============\n");
        ui->textBrowser->insertPlainText("   Top Ten Words\n");
        ui->textBrowser->insertPlainText("===============\n");

        f.close();
    }
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_actionSave_All_triggered()
{
    //save everything to the file
    QString file = QFileDialog::getSaveFileName(this,"Save to File","book_data.txt");
    QFile saveFile(file);
    if(saveFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << file;

        QTextStream out(&saveFile);
        out<<ui->textBrowser->toPlainText();

        saveFile.flush();
        saveFile.close();
    }

    //get the file name
    //open a qfile with that name and save the data in the file
    // word count
    // paragraph  count
    // reading level
    // Top Ten words
    // Total process time
    //

}

//tab z
void MainWindow::on_tabWidget_tabBarClicked(int index)
{

    switch(index)
    {


        case 0:
                ui->textBrowser_27->setText("tab a");
                break;
        case 1:
                ui->textBrowser_26->setText("tab b");
                break;
        case 2:

                ui->textBrowser_25->setText("tab c");
                break;
        case 3:

                ui->textBrowser_24->setText("tab d");
                break;
        case 4:

                ui->textBrowser_23->setText("tab e");
                break;
        case 5:

                ui->textBrowser_22->setText("tab f");
                break;
        case 6:

                ui->textBrowser_21->setText("tab g");
                break;
        case 7:

                ui->textBrowser_20->setText("tab h");
                break;
        case 8:

                ui->textBrowser_19->setText("tab i");
                break;
        case 9:

                ui->textBrowser_18->setText("tab j");
                break;
        case 10:

                ui->textBrowser_17->setText("tab k");
                break;
        case 11:

                ui->textBrowser_28->setText("tab l");
                break;
        case 12:

                ui->textBrowser_15->setText("tab m");
                break;
        case 13:

                ui->textBrowser_14->setText("tab n");
                break;
        case 14:

                ui->textBrowser_13->setText("tab o");
                break;
        case 15:

                ui->textBrowser_12->setText("tab p");
                break;
        case 16:

                ui->textBrowser_11->setText("tab q");
                break;
        case 17:

                ui->textBrowser_10->setText("tab r");
                break;
        case 18:

                ui->textBrowser_9->setText("tab s");
                break;
        case 19:

                ui->textBrowser_8->setText("tab t");
                break;
        case 20:

                ui->textBrowser_7->setText("tab u");
                break;
        case 21:

                ui->textBrowser_6->setText("tab v");
                break;
        case 22:

                ui->textBrowser_5->setText("tab w");
                break;
        case 23:

                ui->textBrowser_4->setText("tab y");
                break;
        case 24:

                ui->textBrowser_3->setText("tab x");
                break;
        case 25:

                ui->textBrowser_2->setText("tab Z");
                break;

        default:
                qDebug() <<"should be be here! case tab case!";
                break;

    }//end switch
}

void MainWindow::on_pushButton_clicked()
{


    QString file = QFileDialog::getSaveFileName(this,"Save to File");
    QFile saveFile(file);
    if(saveFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << file;

        QTextStream out(&saveFile);
        out<<ui->textBrowser_2->toPlainText();
        saveFile.flush();
        saveFile.close();
    };
}

void MainWindow::updateTab()
{

}

void MainWindow::saveData(QString filename,const QTextBrowser *textData)
{
   // QFileDialog::selectFile("Letter.txt");
    QString file = QFileDialog::getSaveFileName(this,"Save to File",filename);

    QFile saveFile(file);

    if(saveFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << file;
        QTextStream out(&saveFile);
        out<< textData->toPlainText();
        saveFile.flush();
        saveFile.close();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QString file = QFileDialog::getSaveFileName(this,"Save to File");
    QFile saveFile(file);
    if(saveFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << file;

        QTextStream out(&saveFile);
        out<<ui->textBrowser_3->toPlainText();
        saveFile.flush();
        saveFile.close();
    };
}

void MainWindow::on_actionAbout_triggered()
{
    aboutWin = new about;
    aboutWin->setModal(true);
    aboutWin->show();
}
