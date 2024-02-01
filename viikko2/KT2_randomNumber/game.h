#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <ctime>
using namespace std;
class Game
{
private:
    int MaxNum;
    int Arvaus;
    int Arvaukset=0;
    int ArvottuNum;

    void printGameResult();
public:
    Game(int mNum);          //jos ei toimi, niin sulkujen sisälle maxnum
    ~Game();
    void play();

};

#endif // GAME_H
