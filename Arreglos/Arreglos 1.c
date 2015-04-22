#include <stdio.h>
#include <stdlib.h>
int datos()
main()
{
	int i;
	static int datos[10];
	cargar(datos,10);
	return(i);
}
/*
FUNCIONES
*/
int cargar(int datos[], int dimension)
{
	int i;
	char control = 'S';
	while (i < dimension && control ='S' )
	{
		printf("Ingrese el valor que desea cargar\n");
		scanf("%d",&datos[i]);
		printf("¿Desea seguir cargando elementos?:\n S/N");
		scanf("%c",&control);
		i++;
	}
	return i;
}
