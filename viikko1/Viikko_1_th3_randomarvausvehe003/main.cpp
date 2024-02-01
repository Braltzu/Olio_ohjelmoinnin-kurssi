#include <iostream>

using namespace std;
int maximiarvo;
int arvottuluku;
int veikkaus;
int yritykset=0;
int arBoja();

int main(){
    srand(time(0));

    cout << "anna maksimi arvo" << endl;
    cin>>maximiarvo;
    arvottuluku=rand()%maximiarvo+1;   //pelaaja saa päättää itse suurimman arvottavan numeron
    arBoja();
    cout<<"yritysten maara "<<yritykset<<endl;

    return 0;
}
int arBoja(){
    while(arvottuluku!=veikkaus){

        cout<<"anna veikkaus"<<endl;
        yritykset++;
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
    return(yritykset);
}
