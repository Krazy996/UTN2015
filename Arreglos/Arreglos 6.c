#include <stdio.h>
#include <stdlib.h>
int cargar(int datos[], int dimension);
void busqueda(int cant, char datos[]);
int main(int argc, char const *argv[])
{
	int cant;
	char datos[10];
	cant=cargar(datos,10);
	busqueda(cant);
}
/*
FUNCIONES
*/
int cargar(char datos[], int dimension)
{
	int i = 0;
	char control = 's';
	do {
        printf("Ingresar número entero: \n");
		fflush(stdin);
		scanf("%c",&datos[i]);
		printf("Desea seguir cargando elementos?:\n s/n \n");
		fflush(stdin);
		scanf("%c",&control);
		i++;
	} while (i < dimension && control =='s');
	return i;
}
//
//
void busqueda(int cant, char datos[])
{
	int i,rbusq;
	char busq;
	printf("Ingrese el caracter que desea buscar:\n");
	fflush(stdin);
	scanf("%c";&busq);
	for ( i = 0; i < cant; ++i)
	{
		if (busq==datos[i])
		{
			rbusq=1;
		}
	}
	if (rbusq==1)
	{
		printf("El caracter buscado se encuentra en el arreglo\n");
	}
	else
	{
		printf("El caracter buscado no se encuentra en el arreglo\n");
	}
}
