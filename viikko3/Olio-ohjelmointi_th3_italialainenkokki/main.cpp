#include <iostream>
#include "kokki.h"
using namespace std;

int main()
{
    chef gordon("gordon ramsay");

    gordon.makeSalad();
    gordon.makeSoup();


    chef anthony("anthony bourdain");

    anthony.makeSalad();
    anthony.makeSoup();

    return 0;
}
