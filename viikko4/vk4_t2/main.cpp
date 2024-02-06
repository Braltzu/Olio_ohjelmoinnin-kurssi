#include <iostream>
using namespace std;

#include "asunto.h"

#include "kerros.h"
#include "katutaso.h"

int main()
{
    Kerros objKerros;
    objKerros.maaritaAsunnot();

    Katutaso objKatutaso;
    objKatutaso.maaritaAsunnot();

    return 0;
}
