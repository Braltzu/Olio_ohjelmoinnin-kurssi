#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>
using namespace std;

class Asunto
{
public:
    Asunto(){
        cout << "asunto luotu" <<endl; // asunto = huone\huoneisto
    }
    ~Asunto(){
    }

    void maarita(int, int);
    double laskeKulutus(double);

    int asukasMaara, neliot;
};

#endif // ASUNTO_H
