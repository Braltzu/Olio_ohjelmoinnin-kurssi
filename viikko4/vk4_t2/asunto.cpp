#include "asunto.h"

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout << "Asunto maaritetty: asukkaita = " <<asukasMaara<< ", nelioita = " <<neliot<< endl;
}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = asukasMaara*neliot;
    cout << "Asunnon kulutus, kun hinta = "<<hinta<<" on "<<kulutus<<endl;
    return kulutus;
}
