#ifndef KOKKI_H
#define KOKKI_H

#include <iostream>
using namespace std;
//____________________________
class chef{

public:
    chef(string);
    void makeSalad();
    void makeSoup();
    ~chef();

protected:
    string name;
};
//_____________________________

//____________________________________________________
inline chef::chef(string pasta1)    //konstruktori
{
    name=pasta1;
    cout<<"chef "<<name<<" olen konstruktori"<<endl;
}

inline void chef::makeSalad()       //salaatti
{
    cout<<"chef "<<name<<" tekee salaattia"<<endl;
}

inline void chef::makeSoup()        //soup
{
    cout<<"chef "<<name<<" tekee keittoa"<<endl;
}

inline chef::~chef()                //destruktori
{
    cout<<"chef "<<name<<" olen dekonstruktori"<<endl;
}
//___________________________________________________________

class italianChef: public chef{

public:
    italianChef(string, int, int);
    string getName();
    void makePasta(int, int);
    ~italianChef();

    int getJauhot() const;
    int getVesi() const;

private:
    int vesi;
    int jauhot;
};
//__________________________________________________________
inline italianChef::italianChef(string pasta1, int a, int b):chef(pasta1){
        name=pasta1;
        vesi=a;
        jauhot=b;
    //cout<<"italianchef "<<name<<" olen konstruktori"<<endl;                  //
}

inline string italianChef::getName(){
    return name;
}

inline void italianChef::makePasta(int b,int a){                               //speshal soos
    cout<<"italianchef "<<name<<" tekee pastaa, uudella reseptilla"<<endl;
    cout<<"italianchef "<<name<<" jauhot = "<<b<<endl;
    cout<<"italianchef "<<name<<" vesi = "<<a<<endl;
}

inline italianChef::~italianChef(){
    //cout<<"italianchef "<<name<<" olen dekonstruktori"<<endl;             //tulostaa jo kerran chef:in kautta
}

inline int italianChef::getJauhot() const{
    return jauhot;
}

inline int italianChef::getVesi() const{
    return vesi;
}
//_________________________________________________________

#endif // KOKKI_H
