#ifndef MAINBMSTUPAD_H
#define MAINBMSTUPAD_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextDocumentWriter>
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainBmstuPad; }
QT_END_NAMESPACE

class MainBmstuPad : public QMainWindow
{
    Q_OBJECT

public:
    MainBmstuPad(QWidget *parent = nullptr);
    ~MainBmstuPad();

private slots:
    void on_openFileAction_triggered();

    void on_saveAction_triggered();

    void on_saveAsAction_triggered();

    void on_mainTextEdit_textChanged();

    void closeEvent(QCloseEvent *event);

private:
    Ui::MainBmstuPad *ui;
    QString fileName;
    bool textChanged = false;
};
#endif // MAINBMSTUPAD_H
