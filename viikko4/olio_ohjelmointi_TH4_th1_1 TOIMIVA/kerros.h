#ifndef KERROS_H
#define KERROS_H

#include "asunto1.h"

#include <iostream>
using namespace std;

class Kerros
{
public:
    Kerros() {
        cout << "--Kerros luotu--"<<endl;
    }
    ~Kerros(){
    }
    void maaritaAsunnot();
    double laskeKulutus(double);
private:
    asunto as1;
    asunto as2;
    asunto as3;
    asunto as4;


};

#endif // KERROS_H
