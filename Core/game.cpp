#include "game.h"
#include "iostream"

Game::Game()
{
    this->gameView = new TableView();
    this->currentPiece= randomTetromino();
    this->ground= new Ground();
    this->updateView();
}

TableView *Game::getGameView() const
{
    return gameView;
}

void Game::updateView(){
   vector<Position *> *positionsPiece=this->currentPiece->getPositions();
   Position * p;
   gameView->cleanAll();
   for(unsigned int i=0; i < positionsPiece->size(); i++){
       p=positionsPiece->at(i);
       gameView->setCell(p->getX(),p->getY(),new TableColor(currentPiece->getColor()));
   }

   list<Position *> *positionsGround=this->ground->getPositions();
   list<Position*>::iterator index;

   for(index=positionsGround->begin(); index!=positionsGround->end(); index++){
       gameView->setCell((*index)->getX(),(*index)->getY(),new TableColor(128,128,128));
   }
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
        this->currentPiece= randomTetromino();
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

Tetromino *Game::randomTetromino()
{
    int i;
    int nombre_aleatoire;
    float borne_minimale = 0;
    float borne_maximale = 6;
    srand(time(NULL));
    nombre_aleatoire = (int) rand() * (borne_maximale+1 - borne_minimale) / RAND_MAX + borne_minimale;

    switch (nombre_aleatoire) {
    case 0:
       return new TetrominoModelI();
    case 1:
        return new TetrominoModelT();
    case 2:
        return new TetrominoModelL();
    case 3:
        return new TetrominoModelLInv();
    case 4:
        return new TetrominoModelS();
    case 5:
        return new TetrominoModelSInv();
    case 6:
        return new TetrominoModelC();
    default:
        return new TetrominoModelI();
    }
}


