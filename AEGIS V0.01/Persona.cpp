#include <iostream>
#include <cstring>
using namespace std;
#include "PrototiposGlobales.h"

#include "Persona.h"

void Persona::Cargar()
{
    int error,i=0;
    cout<<"Nombre  : ";
    cin.ignore();
    cin.getline(Nombre,20);
    if(Nombre);
    cout<<"Apellido :";
    cin.getline(Apellido,20);
    cout<<" "<<endl;
    for (i=0; i<3; i++)
    {
        cout<<"Fecha de nacimiento (d/m/a) "<<endl;
        cin>>Dia;
        cout<<"/";
        cin>>Mes;
        cout<<"/";
        cin>>Anio;

        error=ValidarFecha(getDia(),getMes(),getAnio());
        if(error<0)
        {
            cout<<"Error Nro "<<error<<" Intente Nuevamente."<<endl;
            cout<<"Intento Numero "<<i<<"/3"<<endl;
            if(i==3)
            {
                return;
            }
        }
        else
            break;
    }
    cin.ignore();
    for(i=0; i<3; i++)
    {
        cout<<"Ingrese Numero de Documento : ";
        cin.getline(Documento,10);

        ///error=(ValidarDocumento(getndoc()
        if(error<0)
        {
            cout<<"Error Nro "<<error<<" Intente Nuevamente."<<endl;
            cout<<"Intento Numero "<<i<<"/3"<<endl;
            if(i==3)
                return;
        }
        else
            break;
    }
    for (int i=0; i<3; i++)
    {
        cout<<"Ingrese Correo Electronico :"<<endl;
        cout<<"EMAIL :";
        cin.getline(Mail,50);
        error=ValidarMail(getEmail());
        if(error<0)
        {
            cout<<"Error Nro "<<error<<" Intente Nuevamente."<<endl;
            cout<<"Intento Numero "<<i<<"/3"<<endl;
            if(i==3)
            {
                return;
            }
        }

        else
            break;
    }
    for(i=0; i<3; i++)
    {
        cout<<"Y Para completar la parte uno del ingreso de datos, Ingrese su Numero de Teléfono"<<endl;
        cout<<"Teléfono :";
        cin.getline(nTelefono,10);
        ///error=ValidarTeléfono(getnTelefono);
        if(error<0)
        {
            cout<<"Error Nro "<<error<<" Intente Nuevamente."<<endl;
            cout<<"Intento Numero "<<i<<"/3"<<endl;
            if(i==3)
                return;
        }

        else
            break;

    }
}


void Persona :: Mostrar()
{


}

/*char Nombre[20];
  char Apellido[20];
  int Dia, Mes, Anio;
  char Documento[10];
  char Mail[50];
  bool Estado;
  char Ndoc[8];
  char nTelefono[10];*/

