/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_File
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *File)
    {
        if (File->objectName().isEmpty())
            File->setObjectName("File");
        File->resize(444, 125);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/dialogIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        File->setWindowIcon(icon);
        gridLayout = new QGridLayout(File);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(245, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        okButton = new QPushButton(File);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 1, 1, 1, 1);

        cancelButton = new QPushButton(File);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(File);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(File);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 3);


        retranslateUi(File);

        QMetaObject::connectSlotsByName(File);
    } // setupUi

    void retranslateUi(QDialog *File)
    {
        File->setWindowTitle(QCoreApplication::translate("File", "File", nullptr));
        okButton->setText(QCoreApplication::translate("File", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("File", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("File", "Specify the path to the file:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class File: public Ui_File {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
