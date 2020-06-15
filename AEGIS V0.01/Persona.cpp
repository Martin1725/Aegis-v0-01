#include <iostream>
#include <cstring>
using namespace std;
#include "Persona.h"

void Persona::cargar()
{
    cout<<"Nombre  : ";
    cin.ignore()
    cin.getline(nombre);
    cout<<"Apellido :"
    cin.getline(apellido);
    cout<<endl;
    cout<<"Fecha de nacimiento"<<endl;
}
