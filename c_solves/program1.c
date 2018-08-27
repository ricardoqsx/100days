// declaracion de librerias
#include<stdio.h>
#include<stdlib.h>
// inicio
int main()
{

	// declaracion de variables
	float a,b,c,d,e,f;
	// limpiar pantalla
	system("clear");
	// bienvenida
	printf("\n\nBienvenido, este programa calcula 2 numeros!\n\n");

	// solicitud de datos
	printf("Escriba su primer numero: ");
	// guardando variables
	scanf("%f",&a);
	printf("Escriba su segundo numero: ");
	scanf("%f",&b);

	// proceso
	c=a+b;
	printf("\n\nEl resultado de la suma es: %.2f",c);
	d=a-b;
	printf("\nEl resultado de la resta es: %.2f",d);
	e=a*b;
	printf("\nEl resultado de la multiplicacion es: %.2f",e);
	f=a/b;
	printf("\nEl resultado de la division es: %.2f",f);

	printf("\n\nSus resultados estan siendo mostrados arriba, gracias\n\n");

return 0;
}
