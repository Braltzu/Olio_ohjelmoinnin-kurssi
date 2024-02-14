#include "katutaso.h"

void Katutaso::maaritaAsunnot()
{
    cout <<"--------------------------------------------"<<endl;
    cout <<"*Maaritetaan 2kpl katutason asuntoja*"<< endl;
    as1->maarita(2,100);
    as2->maarita(2,100);

}
Katutaso::Katutaso(){
    as1= new asunto;
    as2= new asunto;
    cout << "--Katutaso luotu--"<<endl;
}

Katutaso::~Katutaso(){
    delete as1;
    delete as2;
}

double Katutaso::laskeKulutus(double hinta)
{
    return as1->laskeKulutus(hinta)+ as2->laskeKulutus(hinta);
}
