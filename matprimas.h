#ifndef MATPRIMAS_H_INCLUDED
#define MATPRIMAS_H_INCLUDED

class MateriaPrima{

private:
    int ID_MateriaPrima;
    char Nombre[30];
    float Precio_Unitario;
    float Stock;

public:
    MateriaPrima(){};

    void setID_MateriaPrima(int ID){ID_MateriaPrima=ID}
    void setNombre(char * nom){strcpy(Nombre,nom);}
    void setPrecio_unitario(float preciou){Precio_Unitario=preciou;}
    void setStock(float stock){this->Stock=stock;}

    int getID_MateriaPrima(){return }
    char * getNombre(){return Nombre;}
    float getPrecio_Unitario(){return Precio_Unitario;}
    float getStock(){return Precio_Unitario;}

};

#endif // MATPRIMAS_H_INCLUDED
