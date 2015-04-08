#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
    Pila aux;
    Pila destino;
    Pila origen;
    inicpila(&aux);
    inicpila(&destino);
    inicpila(&origen);
    int contador;
    contador=0;
    while (contador<5)
    {
        leer(&origen);
        contador++;
    }
    contador=0;
    while (contador<5)
    {
        apilar(&aux,desapilar(&origen));
        apilar(&destino,desapilar(&aux));
        contador++;
    }
    mostrar(&destino);
    getch();
    return 0;
}
