
#include <iostream>
#include"GameLoop.h"
using namespace std;


int main()
{
    GameLoop *game;
    game = new GameLoop();
    game->MainGameLoop();
    delete(game);

    return 0;
}