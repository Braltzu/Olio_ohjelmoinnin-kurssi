#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "kerros.h"
#include "katutaso.h"

class Kerrostalo {

private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;

public:
    Kerrostalo() {
        cout << "Kerrostalo luotu"<<endl;
    }
    ~Kerrostalo() {
    }
    double laskeKulutus(double);
    void maaritaKerrostalo();
};

#endif // KERROSTALO_H
