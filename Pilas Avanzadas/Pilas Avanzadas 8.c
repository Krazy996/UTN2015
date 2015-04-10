#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila papelera,dada,eliminar,aux;
	int i=0,g=0;
	inicpila(&aux);
	inicpila(&dada);	
	inicpila(&papelera);
	inicpila(&eliminar);
	while (i<5)
	{
		leer(&dada);
		i++;
	}
	printf("Cual es el valor que desea eliminar en la pila: \n");
	leer(&eliminar);
	while (!pilavacia(&dada))
	{
		if (tope(&dada)==tope(&eliminar))
		{
			g=1;
			apilar(&papelera,desapilar(&dada));
		}
		else
		{
			apilar(&aux, desapilar(&dada));
		}
	}
	if (g==1)
	{
		printf("El valor que desea eliminar fue eliminado exitosamente de la pila \n");
	}
	else
	{
		printf("El valor que desea eliminar no se encuentra en la pila\n");
	}
	system("pause");
	return(0);
}