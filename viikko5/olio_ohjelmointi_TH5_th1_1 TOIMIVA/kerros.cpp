#include "kerros.h"

void Kerros::maaritaAsunnot()
{
    cout <<"--------------------------------------------"<<endl;
    cout <<"*Maaritetaan 4kpl kerroksen asuntoja*"<< endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}

Kerros::Kerros(){
    as1 = new asunto;
    as2 = new asunto;
    as3 = new asunto;
    as4 = new asunto;
    cout << "--Kerros luotu--"<<endl;
}

Kerros::~Kerros(){
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

double Kerros::laskeKulutus(double hinta){
    return as1->laskeKulutus(hinta)+ as2->laskeKulutus(hinta)+ as3->laskeKulutus(hinta)+ as4->laskeKulutus(hinta);
}
