#ifndef PROTOTIPOSGLOBALES_H_INCLUDED
#define PROTOTIPOSGLOBALES_H_INCLUDED
#pragma once
    struct Fecha
{int dia,mes,anio;};
    const char *ArchivoClientes ="Clientes.dat";
    const char *ArchivoVendedor ="Vendedor.dat";
    const char *ArchivoProveedor ="Proveedor.dat";
    const char *ArchivoProducto ="Producto.dat";
    const char *ArchivoVenta ="Ventas.dat";


int ValidarMail(const char *Mail);
int ValidarFecha(int Dia ,int Mes,int Anio);



#endif // PROTOTIPOSGLOBALES_H_INCLUDED
