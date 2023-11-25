#ifndef SNAKEFOOD_H
#define SNAKEFOOD_H
#include<QLabel>
#include<QMainWindow>

class SnakeFood:public QLabel
{
public:
    SnakeFood(size_t size,QWidget* parent);
    ~SnakeFood();
};

#endif // SNAKEFOOD_H
