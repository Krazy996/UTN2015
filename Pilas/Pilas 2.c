#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
main()
{
	Pila origen,destino;
	inicpila (&origen);
	inicpila (&destino);
	int i;
	i=0;
	while(i<6)
	{
		leer(&origen);
		i++;
	}
	while (!pilavacia(&origen))
	{
		apilar(&destino, desapilar(&origen));
	}
	mostrar(&destino);
	getch();
	return(0);
}