#include <iostream>
using namespace std;

//#include "asunto1.h"
//#include "kerros.h"
//#include "katutaso.h"

#include "kerrostalo.h"

int main()
{

   // Kerros objKerros;
    //objKerros.maaritaAsunnot();

    //Katutaso objKatutaso;
    //objKatutaso.maaritaAsunnot();

    Kerrostalo objKerrostalo;
    objKerrostalo.maaritaKerrostalo();

    cout <<"--------------------------------------------"<<endl;
    cout<<"kerrostalon kulutus, = "<<objKerrostalo.laskeKulutus(2)<<endl;

    return 0;
}
