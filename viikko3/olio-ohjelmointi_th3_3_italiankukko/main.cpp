#include <iostream>
#include "kokki.h"
using namespace std;

int main()
{
    chef gordon("gordon ramsay");
    italianChef waaaario("waaaario",250,300);
    int vesib=waaaario.getVesi();
    int jauhob=waaaario.getJauhot();

    waaaario.makePasta(jauhob, vesib);
    gordon.makeSalad();
    gordon.makeSoup();

    // italianChef waaaario("waaaario");
    // waaaario.makePasta();

    // chef anthony("anthony bourdain");

    // anthony.makeSalad();
    // anthony.makeSoup();



    return 0;
}
