#ifndef USUARIOS_H_INCLUDED
#define USUARIOS_H_INCLUDED

#include <cstring>

enum Tipo{
		ADMIN,
		VENTAS,
		PRODUCCION,
		EXPEDICION
	};

class Usuario{

private:
	char nombre[20];
	char contrasenia[20];
	int id;
	Tipo tipo_usuario;

public:
    Usuario(){};
	Usuario(const char*,const char*, int, Tipo);

	void setNombre(char* nombre){strcpy(this->nombre,nombre);}
	void setContrasenia(char* contrasenia){strcpy(this->contrasenia,contrasenia);}
	void setId(int id){this->id = id;}
	void setTipo(Tipo tipo_usuario){this->tipo_usuario = tipo_usuario;}

	const char* getNombre(){return nombre;}
	const char* getContrasenia(){return contrasenia;}
    int getId(){return id;}
	Tipo getTipo(){return tipo_usuario;}

	int LeerDeDisco(int);
};

Usuario::Usuario(const char* nombre,
				const char* contrasenia,
				int id,
				Tipo t)
{
	strcpy(this->nombre, nombre);
	strcpy(this->contrasenia, contrasenia);
	this->id = id;
	this->tipo_usuario = t;
}

int Usuario::LeerDeDisco(int pos)
{
	int a;
	FILE *pUsuario;
	pUsuario = fopen("usuarios.dat","rb");

	if(pUsuario == NULL) return -10;

	fseek(pUsuario,pos*sizeof *this,0);

	a = fread(this,sizeof *this,1,pUsuario);

	fclose(pUsuario);

	return a;
}

#endif // USUARIOS_H_INCLUDED
