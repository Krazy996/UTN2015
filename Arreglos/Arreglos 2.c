#include <stdio.h>
#include <stdlib.h>
main()
{
	int cant,i;
	int datos[10];
	cant=cargar(datos,10);
	/*for (i=0;i<cant;i++)
    {
        printf("\n Posicion %d %d \n"i,datos[i]);
    }*/
    mostra(cant);
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
void mostra(int cant, int datos[])
{
	int i;
	for (i=0;i<cant;i++)
    {
        printf("\n Posicion %d %d \n",i,datos[i]);
    }
}
