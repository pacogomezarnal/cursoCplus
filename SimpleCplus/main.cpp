#include <iostream>

using namespace std;

int main()
{

    string peldanyoSup={(char)95,(char)95};
    string peldanyo={(char)124,(char)95,(char)95};
    string espacioInicial="  ";
    string escalera="";
    int peldanyos=0;

    cout <<"¿Cuantos peldaños quieres pintar [1-10]?" << endl;
    cin >> peldanyos;

    while(peldanyos<1||peldanyos>10){
        cout << "¿Cuantos peldaños quieres pintar [1-10]?" <<endl;
        cin>>peldanyos;
    }

    for (int i = 0; i < peldanyos; ++i) {
        if(i==0)escalera=escalera+peldanyoSup+"\n";
        else escalera=escalera+peldanyo+"\n";

        escalera=escalera+espacioInicial;
        espacioInicial=espacioInicial+"   ";
    }
    escalera=escalera+peldanyo;
    cout << escalera <<endl;
}
