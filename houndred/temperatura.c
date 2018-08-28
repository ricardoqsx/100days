#include<stdio.h>
#include<stdlib.h>
#define bv "\n\n Bienvenido, este programa te calculara grados celsius a Farenheit\n\n"

int main()
{
	float c,f;
	printf(bv);

	printf("Introduzca los grados Celsius: ");
	scanf("%f",c);

	f=(c*1.8)+32;

	printf("\n\nGracias, %.2f grados celsius equivalen a %.2f grados farenheit\n\n",c,f);


return 0;
}
