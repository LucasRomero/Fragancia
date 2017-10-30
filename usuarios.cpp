#include "usuarios.h"

Usuario::Usuario(){
}

Usuario::Usuario(const char* nombre,
				const char* contrasenia,
				Tipo t)
{
	strcpy(this->nombre, nombre);
	strcpy(this->contrasenia, contrasenia);
	this->tipo_usuario = t;
}
