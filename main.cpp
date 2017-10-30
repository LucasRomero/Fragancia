#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

#include "usuarios.h"

int main(){

    Usuario auxLogeo;
    FILE *pUsuario;

    pUsuario = fopen("usuarios.dat", "rb");
    if(pUsuario == NULL) exit(1);



    fclose(pUsuario);

    return 0;
}
