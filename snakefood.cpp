#include "snakefood.h"

SnakeFood::SnakeFood(size_t size,QWidget* parent):QLabel(parent)
{
    resize(size,size);
    int max_x=parent->width()/size,max_y=parent->height()/size;
    move(rand()%max_x*size,rand()%max_y*size);

    char style[255];
    sprintf(style,"background-color:rgb(%d,%d,%d);",
            rand()%256,rand()%256,rand()%256);


}

SnakeFood::~SnakeFood()
{

}

