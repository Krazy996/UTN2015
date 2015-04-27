#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

main()
{
	Pila dada;
	inicpila(&dada);
	int cant,i;
	int datos[10];
	cant=cargar(datos,10);

}
/*
FUNCIONES
*/
int cargar(int datos[], int dimension)
{
	int i = 0;
	char control = 's';
	do {
        printf("Ingresar número entero: \n");
		fflush(stdin);
		scanf("%d",&datos[i]);
		printf("Desea seguir cargando elementos?:\n s/n \n");
		fflush(stdin);
		scanf("%c",&control);
		i++;
	} while (i < dimension && control =='s');
	return i;
}
//
//
void copiar_pila(int cant, int datos[],Pila *dada)
{
	int i;
	for ( i = 0; i < cant; ++i)
	{
		apilar(dada, datos[i]);
	}
	mostrar(dada);
}