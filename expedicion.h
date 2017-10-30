#ifndef EXPEDICION_H_INCLUDED
#define EXPEDICION_H_INCLUDED

class Expedicion{

private:
    Fecha fecha;
    int nro_pedido;
    float peso_total;
    int nro_ruteo;
    Zona zonas;

public:
    Expedicion(){};

    void setFecha(Fecha fecha){this->fecha = fecha;}
    void setNroPedido(int nro_pedido){this->nro_pedido = nro_pedido;}
    void setPesoTotal(float peso_total){this->peso_total = peso_total;}
    void setNroRuteo(int nro_ruteo){this->nro_ruteo = nro_ruteo;}
    void setZonas(Zona zonas){this->zonas = zonas;}

    Fecha getFecha(){return fecha;}
    int getNroPedido(){return nro_pedido;}
    float getPesoTotal(){return peso_total;}
    int getNroRuteo(){return nro_ruteo;}
    Zona getZonas(){return zonas;}
};

#endif // EXPEDICION_H_INCLUDED
