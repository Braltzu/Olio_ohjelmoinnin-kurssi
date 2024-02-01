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

// class italianChef: public chef{          TARVITAAN VASTA 2 diassa ja sen jälkeen!!!!

// public:
//     italianChef(string);
//     string getName();
//     void makePasta();
//     ~italianChef();
// };

// inline italianChef::italianChef(string)
// {

// }

// inline string italianChef::getName()
// {

// }

// inline void italianChef::makePasta()
// {

// }

// inline italianChef::~italianChef()
// {

// }


#endif // KOKKI_H
