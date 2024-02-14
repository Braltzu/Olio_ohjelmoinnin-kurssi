#include "asunto1.h"

//____________________________________________luokan määritykset
asunto::asunto(){
    cout<<"asunto luotu"<<endl;

}

asunto::~asunto(){

}


void asunto::maarita(int a, int b){

    asukasMaara =a;
    neliot= b;

    cout<<"asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}
//___________________________________________________________
double asunto::laskeKulutus(double hinta){


    return hinta * neliot * asukasMaara;
}
//____________________________________________
