#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;



class asunto
{
public:
    asunto();
    int asukasMaara;
    int neliot;

    void maarita(int, int);
    double laskeKulutus(double);
    ~asunto();
};
//____________________________________________
inline asunto::asunto(){                        //konstruktori
    cout<<"asunto luotu"<<endl;
}
inline void asunto::maarita(int a, int b){
    asukasMaara=a;      //samma på suomi
    neliot=b;           //tässä vaan että muistan
}
inline double asunto::laskeKulutus(double c){
    laskeKulutus=c;    //sama homma
}
inline asunto::~asunto(){
    //cout<<"olen dekonstruktori"<<endl;        //laitettu hetkeksi pois käytöstä
}

#endif // ASUNTO_H
