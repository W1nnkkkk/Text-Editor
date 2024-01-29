#ifndef FILE_H
#define FILE_H

#include <QDialog>

namespace Ui {
class File;
}

class File : public QDialog
{
    Q_OBJECT

public:
    explicit File(QWidget *parent = nullptr);
    ~File();

signals:
    void filePath(const QString& path);

private slots:
    void okClicked();

private:
    Ui::File *ui;

};

#endif // FILE_H
