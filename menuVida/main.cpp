#include <iostream>

using namespace std;

struct vida{
  int energia;
  int dinero;
};

void initVida(vida *persona){
    persona->dinero=100;
    persona->energia=100;
}

void modificarEnergia(vida *persona,bool quitar){
    int mod=rand()%10 + 1;

    if(quitar) persona->energia-=mod;
    else persona->energia+=mod;
}

void modificarDinero(vida *persona,bool quitar){
    int mod=rand()%10 + 1;

    if(quitar) persona->dinero-=mod;
    else persona->dinero+=mod;
}

void PrintVida(vida *persona){
    cout << "********** PERSONA **********" << endl;
    cout << "Energia: " +to_string(persona->energia) << endl;
    cout << "Dinero: " +to_string(persona->dinero) << endl;
};


bool PrintMenu(bool error,vida *persona)
{
    int myChoice = 0;

    if(error) cout << "!!!! ERROR en la elección!!!!" << endl;
    cout << "********** Menu **********" << endl;
    cout << "(1): Comer" << endl;
    cout << "(2): Trabajar" << endl;
    cout << "(3): Descansar" << endl;
    cout << "(4): Hijos" << endl;
    cin >> myChoice;

    switch(myChoice)
    {
    case 1:
        modificarEnergia(persona,false);
        modificarDinero(persona,true);
        return true;
    case 2:
        modificarEnergia(persona,true);
        modificarDinero(persona,false);
        return true;
    case 3:
        modificarEnergia(persona,false);
        modificarDinero(persona,true);
        return true;
        break;
    case 4:
        modificarEnergia(persona,true);
        modificarDinero(persona,true);
        return true;
        break;
    default:
        return false;
        break;
    }
}

int main()
{
    bool error=false;
    vida *paco;
    //Inicializamos
    initVida(paco);
    PrintVida(paco);

    while(!PrintMenu(error,paco)) error=true;
    PrintVida(paco);
    return 0;
}
