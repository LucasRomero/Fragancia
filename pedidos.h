#ifndef PEDIDOS_H_INCLUDED
#define PEDIDOS_H_INCLUDED

#include "fecha.h"

class Pedido{

private:
    int nro_pedido;
    Fecha fecha;
    char cod_producto[5];
    char nombre_producto[30];
    float cantidad;
    float imp_parcial;
    float imp_total;

public:
    Pedido(){};

    void setNroPedido(int nro_pedido){this->nro_pedido = nro_pedido;}
    void setFecha(Fecha fecha){this->fecha = fecha;}
    void setCodProducto(char* cod_producto){strcmp(this->cod_producto,cod_producto);}
    void setNombreProducto(char* nombre_producto){strcpy(this->nombre_producto,nombre_producto);}
    void setCantidad(float cantidad){this->cantidad = cantidad;}
    void setImpParcial(float imp_parcial){this->imp_parcial = imp_parcial;}
    void setImpTotal(float imp_total){this->imp_total = imp_total;}

    int getNroPedido(){return nro_pedido;}
    Fecha getFecha(){return fecha;}
    char* getCodProducto(){return cod_producto;}
    char* getNombreProdcuto(){return nombre_producto;}
    float getCantidad(){return cantidad;}
    float getImpParcial(){return imp_parcial;}
    float getImpTotal(){return imp_total;}

};

#endif // PEDIDOS_H_INCLUDED
