#include <iostream>

using namespace std;
int maximiarvo;
int arvottuluku;
int veikkaus;

int main(){
    srand(time(0));

    cout << "anna maksimi arvo" << endl;
    cin>>maximiarvo;


    arvottuluku=rand()%maximiarvo+1;   //pelaaja saa päättää itse suurimman arvottavan numeron

    while(arvottuluku!=veikkaus){

        cout<<"anna veikkaus"<<endl;
         cin>>veikkaus;
        if(arvottuluku > veikkaus){
            cout<<"luku on isompi"<<endl;
        }
        else if(arvottuluku < veikkaus){
            cout<<"luku on pienempi"<<endl;
        }
        else{
            cout<<"Oikea vastaus!"<<endl;
            //peliloppuu
        }

    }
    return 0;
}
