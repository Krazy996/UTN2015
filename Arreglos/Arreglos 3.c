#include <stdio.h>
#include <stdlib.h>
int cargar(int datos[], int dimension);
int suma(int cant, int datos[]);
main()
{
	int cant,i,sum;
	int datos[10];
	cant=cargar(datos,10);
	sum=suma(cant,datos);
	printf("La suma de los elementos del arreglo es de: %d\n",sum );
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
int suma(int cant, int datos[])
{
	int sum=0,i;
	for (i=0;i<cant;i++)
    {
        sum=sum+datos[i];
    }
    return (sum);
}