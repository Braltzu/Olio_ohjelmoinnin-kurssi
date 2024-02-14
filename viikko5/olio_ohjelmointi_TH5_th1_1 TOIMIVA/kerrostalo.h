#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "kerros.h"
#include "katutaso.h"

class Kerrostalo {

private:
    Katutaso *eka;
    Kerros *toka;
    Kerros *kolmas;
    Kerros *neljas;

public:
    Kerrostalo();
    ~Kerrostalo();


    double laskeKulutus(double);

};

#endif // KERROSTALO_H


