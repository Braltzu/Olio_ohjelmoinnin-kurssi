#include "katutaso.h"

void Katutaso::maaritaAsunnot()
{
    cout <<"--------------------------------------------"<<endl;
    cout <<"*Maaritetaan 2kpl katutason asuntoja*"<< endl;
    as1.maarita(2,100);
    as2.maarita(2,100);

}

double Katutaso::laskeKulutus(double hinta)
{
   return as1.laskeKulutus(hinta)+ as2.laskeKulutus(hinta);
}
