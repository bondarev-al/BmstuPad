#ifndef MAINBMSTUPAD_H
#define MAINBMSTUPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainBmstuPad; }
QT_END_NAMESPACE

class MainBmstuPad : public QMainWindow
{
    Q_OBJECT

public:
    MainBmstuPad(QWidget *parent = nullptr);
    ~MainBmstuPad();

private:
    Ui::MainBmstuPad *ui;
};
#endif // MAINBMSTUPAD_H
