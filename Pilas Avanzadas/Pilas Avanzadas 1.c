#include <stdio.h>
#include <stdlib.h>
#include <pila.h>
#include <pila.c>
main()
{
	Pila p;
	int suma=0,g=0,dato;
	inicpila (&p);
	while (g<5)
	{
		leer(&p);
	//	dato=topepila(&p);
		suma=tope(&p)+suma;
		g++;
	}
	printf("la suma de la pila es de %d \n",suma );
	//getch();
	return(0);
}