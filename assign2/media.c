// agregar librerias
#include<stdio.h>
#include<stdlib.h>
// agregar macros
#define bv "\n\nBienvenido, este programa te dira si pasaste o no el semestre!\n\n"

// inicio
int main()

{
// declarar variable flotante a,b,c,d; char nm[10],ap[10]
	float a,b,c,d;
	char nm[10],ap[10];
// comprobacion de preprocesador de sistema (si es linux, mac o windows)
#ifdef __linux__
	system("clear");
#endif

#ifdef _WIN32
	system("cls");
#endif
// Escribir Saludo
	printf(bv);
// Escribir Introduzca su nombre
	printf("Introduzca su nombre: ");
// leer nm
	scanf("%s",&nm);
// Escribir Introduzca su apellido
	printf("Introduce tu apellido: ");
// leer ap
	scanf("%s",&ap);
// solicita datos a trabajar al usuario
	printf("\nHola %s! Vamos a proceder a calcular tu promedio",nm);
// Escribir Introduzca la primera nota obtenida
	printf("\n\nIntroduzca la primera nota obtenida: ");
// leer a
	scanf("%f",&a);
// Escribir Introduzca la segunda nota obtenida
	printf("Introduzca la segunda nota obtenida: ");
// leer b
	scanf("%f",&b);
// Escribir Introduzca la tercera nota obtenida
	printf("Introduzca la tercera nota obtenida: ");
// leer c
	scanf("%f",&c);
// d=(a+b+c)/3
	d=(a+b+c)/3;
	
/* comment: al agregar rangos encerrar en un parentesis general la operacion de rango y separarlas con el operador && (AND) ó || (OR)*/
// si d >=61 y d <=100
	if((d>=61) && (d<=100))
	{
// Escribir nm ap, aprobaste el semestre con d puntos	
		printf("\n\n%s %s, aprobaste el semestre con %.2f puntos\n\n",nm,ap,d);
	
	}
// de otro modo si d>=0 y d<=60
	else if((d>=0) && (d<=60))
	{
//Escribir nm ap, reprobaste el semestre con d puntos
		printf("\n\n%s %s, reprobaste el semestre con %.2f puntos\n\n",nm,ap,d);
	}
// fin si
return 0;
}
// fin