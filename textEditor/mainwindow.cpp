#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "file.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
    ui->statusbar->showMessage("OK");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    File* setFilePathWindow = new File(this);
    setFilePathWindow->show();

    connect(setFilePathWindow, SIGNAL(filePath(QString)), this, SLOT(openFile(QString)));
}


void MainWindow::on_actionSave_triggered()
{
    File* setFilePathWindow = new File(this);
    setFilePathWindow->show();

    connect(setFilePathWindow, SIGNAL(filePath(QString)), this, SLOT(saveFile(QString)));
}

void MainWindow::openFile(const QString& filePath)
{
    QFile openFile(filePath);
    if(!openFile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error","Error open file");
        ui->statusbar->showMessage("Error open file");
        return;
    }

    QTextStream stream(&openFile);
    QString buff = stream.readAll();
    ui->textEdit->setText(buff);
    ui->statusbar->showMessage("Read to file: " + filePath);
    openFile.flush();
    openFile.close();
}

void MainWindow::saveFile(const QString& filePath)
{
    QFile saveFile(filePath);
    if(!saveFile.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::information(this, "Error","Error save file");
        ui->statusbar->showMessage("Error save file");
        return;
    }
    QTextStream stream(&saveFile);
    stream << ui->textEdit->toPlainText();
    ui->statusbar->showMessage("Write to file: " + filePath);
    saveFile.close();
}
