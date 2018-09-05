#include<stdio.h>
#include<stdlib.h>

int main ()

{
	float dsc,ttl;
	char md[15];

	system("clear");

	printf("\n\nBienvenido, este programa te dira que descuento es el apropiado para tu auto!\n\n");

	printf("Escriba el modelo del auto: ");
	scanf("%s",&md);

	if(strcmp(md,"sedan")==0)
		{
			printf("Su descuento proporcional sera del 10%");
		}
	else if(strcmp(md,"puckup")==0)
		{
			printf("Su descuento proporcional sera del 12%");
		}
	else

	return 0;
}
