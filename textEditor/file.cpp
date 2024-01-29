#include "file.h"
#include "ui_file.h"

File::File(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::File)
{
    ui->setupUi(this);
    connect(ui->okButton, SIGNAL(clicked()), SLOT(okClicked()));
    connect(ui->cancelButton, SIGNAL(clicked()), SLOT(close()));
}

void File::okClicked()
{
    emit filePath(ui->lineEdit->text());
    close();
}

File::~File()
{
    delete ui;
}

