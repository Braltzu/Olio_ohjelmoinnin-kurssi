#include "asunto1.h"

//____________________________________________luokan määritykset
void asunto::maarita(int a, int b){                         //tätä se ei aktivoi

    asukasMaara =a;
    neliot= b;

    cout<<"asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}
//___________________________________________________________
double asunto::laskeKulutus(double hinta){


    return hinta*neliot;
}
//____________________________________________
