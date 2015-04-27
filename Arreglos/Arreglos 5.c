#include <stdio.h>
#include <stdlib.h>
int cargar(int datos[], int dimension);
int suma(int cant, int datos[]);
int main()
{
<<<<<<< HEAD
	int cant,i;
	char datos[10];
	cant=cargar(datos,10);

=======
	int cant=0 , i=0 , sum=0 ;
	int datos[100];
	cant=cargar(datos,100);
	sum=suma(cant,datos);
	printf("La suma de los elementos del arreglo es de: %d\n",sum );
>>>>>>> origin/master
}
/*
FUNCIONES
*/
int cargar(char datos[], int dimension)
{
	int i = 0;
		do {
        printf("Ingresar número entero: \n");
		fflush(stdin);
<<<<<<< HEAD
		scanf("%c",&datos[i]);
		printf("Desea seguir cargando elementos?:\n s/n \n");
		fflush(stdin);
		scanf("%c",&control);
=======
		scanf("%d",&datos[i]);
>>>>>>> origin/master
		i++;
	} while (i < dimension);
	return i;
}
//
//
<<<<<<< HEAD
int buscar()
{
	
=======
int suma(int cant, int datos[])
{
	int sum=0,i;
	for (i=0;i<cant;i++)
    {
        sum=sum+datos[i];
    }
    return (sum);
>>>>>>> origin/master
}