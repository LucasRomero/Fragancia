#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int buscarUsuario(char* nombre, char* contrasenia)
{
    pos = 0;
    Usuario auxUsuario;

    while(auxUsuario.LeerDeDisco(pos)==1)
		{
		if(strcmp(nombre,auxUsuario.getNombre())==0 &&
        strcmp(contrasenia,auxUsuario.getContrasenia())==0)
            return pos;

        pos++;
		}

	return -1;
}


verificaLogin(){



}


#endif // FUNCIONES_H_INCLUDED
