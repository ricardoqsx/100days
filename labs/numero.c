#include<stdio.h>
#include<stdlib.h>
// inicio
int main()
{

// declaracion de variables
	int a, b;
// limpia pantalla

system("clear");
	printf("\n\nBienvenido, este programa te dira cual numero es mayor");

// solicitar 1er dato al usuario
	printf("\nIntroduzca el primer valor: ");
// guardar variable 1
	scanf("%i",&a);
// solicitar 2ndo dato al usuario
	printf("Introduzca el segundo valor: ");
// guardar variable 2
	scanf("%i",&b);

// proceso
	if(a>b)
	{
		printf("El numero mayor es: %i\n\n",a);
	}
	else
		if(a<b)
		{
			printf("El numero mayor es: %i\n\n",b);
		}
		else
		{
			printf("Los numeros son iguales \n %i \t %i \n\n",a,b);
		}

// fin
		return 0;
}

//
