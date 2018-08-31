#include<stdio.h>


int main ()
{
	int num;

	printf("\n\nHola, te dire si el numero que escribas es positivo o negativo\n\n");

	printf("Escriba un numero positivo o negativo: ");
	scanf("%i",&num);

	if(num<0)
	{
		printf("\n el numero es negativo");
	}
	else
	{
		printf("\n el numero es positivo\n\n");
	}


	return 0;
}