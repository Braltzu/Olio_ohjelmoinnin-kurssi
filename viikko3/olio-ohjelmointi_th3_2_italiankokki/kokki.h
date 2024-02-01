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
    italianChef(string);
    string getName();
    void makePasta();
    ~italianChef();
};
//__________________________________________________________
inline italianChef::italianChef(string pasta1):chef(pasta1){
    name=pasta1;
    //cout<<"italianchef "<<name<<" olen konstruktori"<<endl;
}

inline string italianChef::getName(){
    return name;
}

inline void italianChef::makePasta(){
     cout<<"italianchef "<<name<<" tekee pastaa"<<endl;
}

inline italianChef::~italianChef(){
    //cout<<"italianchef "<<name<<" olen dekonstruktori"<<endl;
}
//_________________________________________________________

#endif // KOKKI_H
