#include "mainbmstupad.h"
#include "ui_mainbmstupad.h"

MainBmstuPad::MainBmstuPad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainBmstuPad)
{
    ui->setupUi(this);
}

MainBmstuPad::~MainBmstuPad()
{
    delete ui;
}


void MainBmstuPad::on_openFileAction_triggered()
{
    QString name = QFileDialog::getOpenFileName(0, "Открытие", "", "*.*");
    if (name != "")
    {
        fileName = name;
        ui->mainTextEdit->clear();
        QFile file(fileName);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        while (!file.atEnd())
        {
            QByteArray line = file.readLine();
            line.chop(1);
            ui->mainTextEdit->append(line);
        }
        ui->saveAction->setEnabled(true);
        file.close();
    }
}

void MainBmstuPad::on_saveAction_triggered()
{
    if (fileName != "")
    {
         QTextDocumentWriter writer(fileName, "plaintext");
         writer.write(ui->mainTextEdit->document());
    }
}

void MainBmstuPad::on_saveAsAction_triggered()
{
    QString name = QFileDialog::getSaveFileName(0, "Сохранить как");
    if (name != "")
    {
        fileName = name;
        MainBmstuPad::on_saveAction_triggered();
    }
}
