#ifndef PRODUCTOS_H_INCLUDED
#define PRODUCTOS_H_INCLUDED

class Producto{
private:
    char cod_Producto[5];
    char nombre[30];
    float precio;
    float peso; // peso en base de la materia prima

public:
    Producto(){};

    void setCod_Producto(char * produc){strcpy(cod_Producto,produc);}
    void setNombre(char * nomb){strcpy(nombre,nom);}
    void setPrecio(float precio){this->precio=precio;}
    void setPeso(float peso){this->peso=peso;}

    char * getCod_Producto(){return cod_Producto;}
    char * getNombre(){return nombre;}
    float getPrecio(){return precio;}
    float getPeso(){return peso;}
};



#endif // PRODUCTOS_H_INCLUDED
