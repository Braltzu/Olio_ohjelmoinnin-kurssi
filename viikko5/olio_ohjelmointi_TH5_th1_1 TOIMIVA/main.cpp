#include <iostream>
using namespace std;
#include "kerrostalo.h"

int main()
{
   Kerrostalo * pointerKerrostalo;
   pointerKerrostalo = new Kerrostalo;

   cout<<"kerrostalon kulutus "<<pointerKerrostalo->laskeKulutus(1)<<endl;

   delete pointerKerrostalo;
   pointerKerrostalo=nullptr;

    return 0;
}
