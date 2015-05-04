#include "game.h"
#include "iostream"

Game::Game()
{
    this->gameView = new TableView();
    this->currentPiece= new TetrominoModelT();
    this->ground= new Ground();
    this->updateView();
}

TableView *Game::getGameView() const
{
    return gameView;
}

void Game::updateView(){
   std::vector<Position *> *positionsPiece=this->currentPiece->getPositions();
   Position * p;
   gameView->cleanAll();
   for(unsigned int i=0; i < positionsPiece->size(); i++){
       p=positionsPiece->at(i);
       gameView->setCell(p->getX(),p->getY(),new TableColor(currentPiece->getColor()));
   }

   std::vector<Position *> *positionsGround=this->ground->getPositions();
   for(unsigned int i=0; i < positionsGround->size(); i++){
       p=positionsGround->at(i);
       gameView->setCell(p->getX(),p->getY(),new TableColor(currentPiece->getColor()));
   }
//   ground->addPiece(currentPiece);
}

void Game::setGameView(TableView *value)
{
    gameView = value;
}

void Game::next()
{
    if(ground->isTouching(currentPiece))
    {
        ground->addPiece(currentPiece);
        delete currentPiece;
        this->currentPiece= new TetrominoModelT();
    }
    else
        this->currentPiece->down();

    this->updateView();
}

void Game::right()
{
    currentPiece->right();
    this->updateView();
}

void Game::left()
{
    currentPiece->left();
    this->updateView();
}

void Game::rotate()
{
    currentPiece->rotate();
}


