#include <stdio.h>
#include <stdlib.h>
main()
{
	int cant,i;
	char datos[10];
	cant=cargar(datos,10);

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
int buscar()
{
	
}