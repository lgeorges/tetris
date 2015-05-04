#include "tcommandpanel.h"
#include "iostream"

TCommandPanel::TCommandPanel(Game* game, QWidget *parent) :
    QWidget(parent)
{
    this->game=game;
    right=new QPushButton();
    left=new QPushButton();
    rotate=new QPushButton();
    gridLayout = new QGridLayout();

    gridLayout->addWidget(right,1,2);
    gridLayout->addWidget(rotate,1,1);
    gridLayout->addWidget(left,1,0);

    connect(right,SIGNAL(clicked()),this,SLOT(slotRight()));
    connect(left,SIGNAL(clicked()),this,SLOT(slotLeft()));
    connect(rotate,SIGNAL(clicked()),this,SLOT(slotRotate()));


    setLayout(gridLayout);
}

void TCommandPanel::slotRight()
{
    game->right();
}

void TCommandPanel::slotLeft()
{
    game->left();
}

void TCommandPanel::slotRotate()
{
    game->rotate();
}
