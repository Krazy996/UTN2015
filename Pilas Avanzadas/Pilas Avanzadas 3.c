#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila dada;
	int suma=0,g=0,op;
	float prom=0;
	inicpila(&dada);
	do 
	{
		op=0;
		leer(&dada);
		suma=suma+tope(&dada);
		g++;
		printf("¿Desea seguir ingresando valores? (Responder con numeros)\n 1-SI \n 2-NO \n");
		scanf("%d",&op);
	}
	while (op==1);
	prom=(float)suma/(float)g;
	printf("El promedio de la pila es de %.2f \n",prom);
	getch();
	return(0);
}