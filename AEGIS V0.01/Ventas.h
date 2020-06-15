#ifndef VENTAS_H_INCLUDED
#define VENTAS_H_INCLUDED
#pragma once
#include "PrototiposGlobales.h"
#include "Producto.h"
class Venta
{
private:
    int numeroventa;
    Fecha fechaVenta;
    int TipoPago;
    int TipoFactura;
    Producto item;
    int legajoVendedor;
    int idCliente;
    char[10] CodigoProducto;
    int cant;
    int TipodeEntrega;
    int PorcentajeDesc;
    float ImporteTotal;
    float ImporteUnidad;
public:

    void cargar();
    void mostrar():

    };



#endif // VENTAS_H_INCLUDED
