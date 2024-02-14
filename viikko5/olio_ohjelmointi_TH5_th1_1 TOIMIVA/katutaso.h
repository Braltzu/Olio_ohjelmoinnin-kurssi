#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto1.h"
#include "kerros.h"

class Katutaso
{
public:
    Katutaso();
    ~Katutaso();

    void maaritaAsunnot();
    double laskeKulutus(double);

private:

    asunto *as1;
    asunto *as2;
};

#endif // KATUTASO_H
