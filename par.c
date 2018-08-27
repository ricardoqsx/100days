#include<stdio.h>
#include<stdlib.h>
// inicio
int main()

{

// limpia pantalla

system("clear");
	printf("\n\nBienvenido, este programa te dira si un numero es par o impar\n");
// declaracion de variables
	int num;
// solicitar variables al usuario
	printf("\nIntroduzca el numero a validar: ");
	scanf("%i",&num);

// proceso
	if (num%2==0)
	{
		printf("El numero es par\n\n");
	}
	else
	{
		printf("el numero es impar\n\n");
	}


// fin
	return 0;

}
