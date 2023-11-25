#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>
#include <QMainWindow>
#include<QKeyEvent>
#include "snakefood.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void keyPressEvent(QKeyEvent* event);

public slots:
    void timeout_slot(void);
private:
    Ui::MainWindow *ui;
    SnakeFood* food;
    QVector<SnakeFood*>snake;

    QVector<SnakeFood*> snake;

};

#endif // MAINWINDOW_H
