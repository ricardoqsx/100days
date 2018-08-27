#include<stdio.h>
#include<stdlib.h>

// inicio
int main()
{
	// datos de entrada
	int a;

// limpia pantalla 
	system("clear");
// saludito
	printf("\n\nBienvenido, este programa te dira si eres mayor de edad\n");

// solicitar datos al usuario
	printf("\nEscriba su edad por favor: ");
	scanf("%i",&a);

// proceso
	if(a>=18)
	{
		printf("Eres mayor de edad!\n\n");
	}
	else
	{
		printf("Eres menor, valla pa la casa\n\n");
	}

// fin
	return 0;
}
