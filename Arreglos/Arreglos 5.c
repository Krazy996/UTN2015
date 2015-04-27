#include <stdio.h>
#include <stdlib.h>
int cargar(int datos[], int dimension);
int suma(int cant, int datos[]);
int main()
{
	int cant=0 , i=0 , sum=0 ;
	int datos[100];
	cant=cargar(datos,100);
	sum=suma(cant,datos);
	printf("La suma de los elementos del arreglo es de: %d\n",sum );
}
/*
FUNCIONES
*/
int cargar(int datos[], int dimension)
{
	int i = 0;
		do {
        printf("Ingresar número entero: \n");
		fflush(stdin);
		scanf("%d",&datos[i]);
		i++;
	} while (i < dimension);
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