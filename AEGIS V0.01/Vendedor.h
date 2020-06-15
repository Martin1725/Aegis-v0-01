#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED
#pragma once
#include "Persona.h"
class Vendedor:public Persona
{
protected:
    float PorcentajeComision;
    float VentaDiaria;
    int legajo;

public:
    //metodos;
    void cargar();
    void mostrar():
    };



#endif // VENDEDOR_H_INCLUDED
