#include "kerrostalo.h"



Kerrostalo::Kerrostalo(){
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    neljas = new Kerros;

    eka->maaritaAsunnot();

    for(int laskuri=0; laskuri<3; laskuri++){
        cout<<endl<<"maaritellaan 4kpl "<<laskuri+1<<". kerroksen asuntoja:"<<endl;
        if (laskuri==0){
            toka->maaritaAsunnot();
        }
        else if (laskuri==1){
            kolmas->maaritaAsunnot();
        }
        else if (laskuri==2){
            neljas->maaritaAsunnot();
        }
    }
    cout << "Kerrostalo luotu"<<endl;
}

Kerrostalo::~Kerrostalo(){
    delete eka;
    delete toka;
    delete kolmas;
    delete neljas;
}



double Kerrostalo::laskeKulutus(double hinta)
{
    return eka->laskeKulutus(hinta)
           + toka->laskeKulutus(hinta)
           + kolmas->laskeKulutus(hinta)
           + neljas->laskeKulutus(hinta);
}
