#include "kerrostalo.h"



void Kerrostalo::maaritaKerrostalo()
{
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}
double Kerrostalo::laskeKulutus(double hinta)
{
    return eka.laskeKulutus(hinta)+ toka.laskeKulutus(hinta)+ kolmas.laskeKulutus(hinta);
}
