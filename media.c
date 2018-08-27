// agregar librerias
#include<stdio.h>
#include<stdlib.h>
// agregar macros
#define bv "\n\nBienvenido, este programa te dira si pasaste o no el semestre!\n\n"

// inicio
int main()

{
// declarar variables
	float a,b,c,d;
// declarar arrays
	char nm[10],ap[10];
// comprobacion de preprocesador de sistema (si es linux, mac o windows)
#ifdef __linux__
	system("clear");
#endif

#ifdef _WIN32
	system("cls");
#endif
// solicitar datos de usuario
	printf(bv);
	printf("Introduzca su nombre: ");
// guarda nombre y apellido
	scanf("%s",&nm);
	printf("Introduce tu apellido: ");
	scanf("%s",&ap);
// solicita datos a trabajar al usuario
	printf("\nHola %s! Vamos a proceder a calcular tu promedio",nm);
	printf("\n\nIntroduzca la primera nota obtenida: ");
// guarda variables a trabajar
	scanf("%f",&a);
	printf("Introduzca la segunda nota obtenida: ");
	scanf("%f",&b);
	printf("Introduzca la tercera nota obtenida: ");
	scanf("%f",&c);
// proceso
	d=(a+b+c)/3;
	
/* comment: al agregar rangos encerrar en un parentesis general la operacion de rango y separarlas con el operador && (AND) ó || (OR)*/
	if((d>=61) && (d<=100))
	{
	
		printf("\n\n%s %s, aprobaste el semestre con %.2f puntos\n\n",nm,ap,d);
	
	}
	else if((d>=0) && (d<=60))
	{
	
		printf("\n\n%s %s, reprobaste el semestre con %.2f puntos\n\n",nm,ap,d);
	
	}

return 0;
}
