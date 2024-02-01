#include "game.h"
#include <iostream>
Game::Game(int mNum) {
    srand(time(0));
    MaxNum-mNum;
    cout << "anna maksimi arvo" << endl;
    cin>>MaxNum;
    ArvottuNum=1+rand()%(MaxNum-1+1);   //pelaaja saa päättää itse suurimman arvottavan numeron

    cout<<"numero on valilla 1 - "<<MaxNum<<endl;
    cout<<"arvaa numero"<<endl;
    cin >> Arvaus;
    Arvaukset++;
}

void Game::play()
{
while(Arvaus != ArvottuNum){


        if(ArvottuNum > Arvaus){
            cout<<"luku on isompi"<<endl;
        }
        else if(ArvottuNum < Arvaus){
            cout<<"luku on pienempi"<<endl;
        }

        cin>>Arvaus;
        Arvaukset++;
    }
cout<< "valitsit oikein, oikea numero oli "<<ArvottuNum<<endl;
cout<<"arvausten maara oli "<<Arvaukset<<endl;
cout<<"--------------------------------------"<<endl;
}



Game::~Game()           //dekonstruktori vittu
{
    cout<<"GAME DESTRUCTOR: peli huuhdottu viemariin"<<endl;
}




