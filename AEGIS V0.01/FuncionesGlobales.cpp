#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstring>
#include "PrototiposGlobales.h"

int ValidarMail(const char *Mail)
{
    int tam=strlen(Mail), pos;
    char *poschar;
    if(Mail[0]=='@'||Mail[0]=='.')
    {
        return -3;   ///Que no empiece ni con arroba ni con punto
    }
    poschar=strchr(Mail,'@');
    if(poschar==NULL)
    {
        return-3;   ///que tenga un arroba
    }
    if(strrchr(Mail,'@')!=poschar)
    {
        return -3;   ///que solo tenga UN arroba
    }
    pos=poschar-Mail;
    if((isalnum(Mail[pos+1]!=0))&&(isalnum(Mail[pos-1]!=0)))
    {
        return-3;   ///Que tenga chares alfanumericos al rededor de arroba.
    }
    poschar=strchr(Mail,'.');          ///Que tenga un punto
    if(poschar==NULL)
    {
        return -3;
    }
    pos=Mail-poschar;
    if(Mail[pos+1]=='.')
    {
        return-3;   ///Que no tenga dos seguidos
    }

    if(Mail[tam-1]=='.')
    {
        return-3;   ///que no termine en punto.
    }
    return 1;
}

int ValidarFecha(int Dia,int Mes, int Anio)
{
    if((Mes>0&&Mes<13)&&(Anio>1920&&Anio<=2020))
    {
        switch(Mes)
        {
        case  1 :
        case  3 :
        case  5 :
        case  7 :
        case  8 :
        case 10 :
        case 12 :
            if ( Dia >= 1 && Dia <= 31 )
            {
                return 1;
            }
            else
            {
                return -1;
            }
        case  4 :
        case  6 :
        case  9 :
        case 11 :
            if ( (Dia >= 1) && (Dia <= 30) )
            {

                return 1;
            }
            else
                return -1;
        case  2 :
            if( Anio % 4 == 0 && Anio % 100 != 0 || Anio % 400 == 0 )
                if ( Dia >= 1 && Dia <= 29 )
                {

                    return 1 ;
                }
                else
                {
                    return -1;
                }
            else if ( Dia >= 1 && Dia <= 28 )
            {
                return 1;
            }
            else
            {
                return -1;
            }

        }
    }
    else
    {

        return -1;
    }
}

