// declaracion de librerias
#include<stdio.h>

// inicio
int main()
{

	// declaracion de variables
	int a,b,c,d,e,f;

	// bienvenida
	printf("\n\nBienvenido, este programa calcula 2 numeros!\n\n");

	// solicitud de datos
	printf("Escriba su primer numero: ");
	// guardando variables
	scanf("%i",a);
	printf("Escriba su segundo numero: ");
	scanf("%i",b);

	// proceso
	c=a+b;
	printf("\n\nEl resultado de la suma es: %i",c);
	d=a-b;
	printf("\nEl resultado de la resta es: %i",d);
	e=a*b;
	printf("\nEl resultado de la multiplicacion es: %i",e);
	f=a/b;
	printf("\nEl resultado de la division es: %i",f);

	printf("\n\nSus resultados estan siendo mostrados arriba, gracias");

return 0;
}
