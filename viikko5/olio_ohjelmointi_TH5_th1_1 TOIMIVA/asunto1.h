#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;


///////////////////////////////////////////////// luokka
class asunto{
public:
    asunto();
    virtual ~asunto();

    int asukasMaara;
    int neliot;
    void maarita(int, int);
    virtual double laskeKulutus(double);

};
////////////////////////////////////////////////luokka


#endif // ASUNTO_H
