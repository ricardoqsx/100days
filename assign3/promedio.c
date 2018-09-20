#include<stdio.h>
#include<stdlib.h>
// inicio
int main()

{
// declarar variables entero a,b,c,p; charnt, nm, ap;
	int a,b,c,p;
	char nt,nm[10],ap[10];
// limpiar pantalla
	system("clear");
// Escribir Bienvenida
	printf("\n\nBienvenido, este programa calculara\nsi aprobaste o reprobaste el semestre!\n\nA Continuacion se le solicitaran las notas.");

// Escribir escriba su nombre
	printf("\n\nEscriba su nombre: ");
// leer nm
	scanf("%s",&nm);
// Escribir Escriba su apellido
	printf("Escriba su apellido: ");
// leer ap
	scanf("%s",&ap);
// Escribir Escriba la primera nota
	printf("\n\nEscriba la primera nota: ");
// leer a
	scanf("%i",&a);
// Escribir Escriba la segunda nota
	printf("Escriba la segunda nota: ");
// leer b
	scanf("%i",&b);
// Escribir Escriba la tercera nota
	printf("Escriba la tercera nota: ");
// leer c
	scanf("%i",&c);

/*comentario: IMPORTANTE!!! escribir bien las operaciones para
evitar errores de ejecucion, sin parentesis y bien delimitado no corre*/
// hacer p=(a+b+c)/3
	p=(a+b+c)/3;
// si p es menor a 101
	if(p<101)
		{
// y si p es menor o igual a 60
		if (p<=60)
		{
// nota es igual a F
			nt='F';
// Escribir Reprobaste el semestre
		printf("\n\n%s, reprobaste el semestre con una %c de %i puntos. \n\nEstudia mas para la proxima\n\n",nm,nt,p);
		}
// si p es mayor o igual a 61 y menor o igual a 70
		if((p>=61)&&(p<=70))
		{
// nota es igual a D
			nt='D';
// Escribir aprobaste el semestre con una D de p puntos
			printf("\n\n%s, aprobaste el semestre con una %c de %i puntos\n\n",nm,nt,p);
		}
// si p es mayor o igual a 71 y menor o igual a 80
		if((p>=71)&&(p<=80))
		{
// nota es igual a C
			nt='C';
// Escribir Aprobaste el semestre con una C de p puntos
			printf("\n\n%s, aprobaste el semestre con una %c de %i puntos\n\n",nm,nt,p);
		}
// si p es mayor o igual a 81 y menor o igual a 90
		if((p>=81)&&(p<=90))
		{
// nota es igual a B
			nt='B';
// Escribir aprobaste el semestre con una B de p puntos
			printf("\n\n%s, aprobaste el semestre con una %c de %i puntos\n\n",nm,nt,p);
		}
// si p es mayor o igual a 91 y menor o igual a 100
		if((p>=91)&&(p<=100))
		{
// nt es igual a A
			nt='A';
// Escribir Aprobaste el semestre con una A de p puntos
			printf("\n\n%s, aprobaste el semestre con una %c de %i puntos\n\n",nm,nt,p);
		}
		}
// de lo contrario si p es mayor a 101
		else if (p>101)
		{
// escribir no estas escribiendo valores correctos
			printf("\n\n%s, no estas escribiendo bien los valores de las notas,\nejecuta el programa de nuevo y asegurate que las notas sean valores de o a 100\n\n");
		}
// fin si

	return 0;
// fin
}

