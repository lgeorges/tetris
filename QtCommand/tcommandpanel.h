#ifndef TCOMMANDPANEL_H
#define TCOMMANDPANEL_H

#include<QPushButton>
#include<QGridLayout>
#include"Core/game.h"

class TCommandPanel : public QWidget
{
    Q_OBJECT
public:
    TCommandPanel(Game* game, QWidget *parent = 0);

signals:
    void signalRight();

public slots:
    void slotRight();
    void slotLeft();
    void slotRotate();

private:
    QGridLayout *gridLayout;
    QPushButton* right;
    QPushButton* left;
    QPushButton* rotate;
    Game* game;
//    TableView* table;
//    TCell *cases [H_TABLE][W_TABLE];
//    QGridLayout *gridLayout;

};


#endif // TCOMMANDPANEL_H
