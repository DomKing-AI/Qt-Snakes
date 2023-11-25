#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"snakefood.h"
#define SNAKE_SIZE 20
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    snake_direction=rand()%4;
    snake.push_back(new SnakeFood(20,this));

    connect(&timer,SIGNAL(timeout()),this,SLOT(timeout_slot());
    timer.start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void keyPressEvent(QKeyEvent* event)
{
    switch(event->key())
    {
    case Qt::Key_Up:
    }
}

void MainWindow::timeout_slot(void)
{
    //移动蛇头
    int x=snake[0]->x(),y=snake[0]->y();
    switch(snake_direction)
    {
    case 0:
        y-=SNAKE_SIZE;break;
    case 1:
        y+=SNAKE_SIZE;break;
    case 2:
        x-=SNAKE_SIZE;break;
    case 3:
        x+=SNAKE_SIZE;break;
    }
    snake[0]->move(x,y);

    //移动蛇身
    for(size_t i=1;i<snake.size();i++)
    {
        snake[i]->move(snake[i-1]->);
    }
}
