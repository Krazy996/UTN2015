#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
int cargar(char datos[], int dimension);
void busqueda(int cant, char datos[]);
int main()
=======
int cargar(int datos[], int dimension);
void busqueda(int cant, char datos[]);
int main(int argc, char const *argv[])
>>>>>>> origin/master
{
	int cant;
	char datos[10];
	cant=cargar(datos,10);
<<<<<<< HEAD
	busqueda(cant,datos);
=======
	busqueda(cant);
>>>>>>> origin/master
}
/*
FUNCIONES
*/
int cargar(char datos[], int dimension)
{
	int i = 0;
	char control = 's';
	do {
<<<<<<< HEAD
        printf("Ingresar un caracter: \n");
=======
        printf("Ingresar número entero: \n");
>>>>>>> origin/master
		fflush(stdin);
		scanf("%c",&datos[i]);
		printf("Desea seguir cargando elementos?:\n s/n \n");
		fflush(stdin);
		scanf("%c",&control);
		i++;
<<<<<<< HEAD
        } while (i < dimension && control =='s');
=======
	} while (i < dimension && control =='s');
>>>>>>> origin/master
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
<<<<<<< HEAD
	scanf("%c",&busq);
=======
	scanf("%c";&busq);
>>>>>>> origin/master
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
<<<<<<< HEAD
}
=======
}
>>>>>>> origin/master
