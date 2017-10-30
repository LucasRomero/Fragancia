#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED

enum Zona{
    CAPITAL;
    SUR;
    OESTE;
    NORTE;
};

class Cliente{;

private:
    int IDCliente;
    char nombre[50];
    char direccion[50];
    char telefono[15];
    char cuit[15];
    char email[15];
    Zona zona;

public:
    Cliente(){};

    void setZona(Zona zona){ this->zona=zona}
    void setNombre(char * nom){strcpy(nombre,nom);}
    void setDireccion(char * direc;){strcpy (direccion,direc);}
    void setTelefono(char * tel){strcpy(telefono,tel);}
    void setCuit(char * cui){strcpy(cuit,cui);}
    void setEmail(char * emai){strcpy(email,emai);}

    int getIDCliente(){return IDCliente;}
    char * getNombre(){return nombre;}
    char * getDireccion(){return direccion;}
    char * getTelefono(){return telefono;}
    char * getCuit(){return cuit;}
    char * getEmail(){return email;}
    Zona getZona(){return zona;}
};

#endif // CLIENTES_H_INCLUDED
