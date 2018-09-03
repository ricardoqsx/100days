#include<stdio.h>
#include<stdlib.h>

int main()

{

	int a,b,c,p;
	char nt,nm[10],ap[10];

	system("clear");

	printf("\n\nBienvenido, este programa calculara\nsi aprobaste o reprobaste el semestre!\n\nA Continuacion se le solicitaran las notas.");


	printf("\n\nEscriba su nombre: ");
	scanf("%s",&nm);
	printf("Escriba su apellido: ");
	scanf("%s",&ap);
	printf("\n\nEscriba la primera nota: ");
	scanf("%i",&a);
	printf("Escriba la segunda nota: ");
	scanf("%i",&b);
	printf("Escriba la tercera nota: ");
	scanf("%i",&c);

/*IMPORTANTE!!! escribir bien las operaciones para
evitar errores de ejecucion, sin parentesis y bien delimitado no corre*/

	p=(a+b+c)/3;

	if(p>60)
		{
		if((p>=61)&&(p<=70))
		{
			nt='D';
			printf("%s, aprobaste el semestre con una %c de %i puntos",nm,nt,p);
		}
		if((p>=71)&&(p<=80))
		{
			nt='C';
			printf("%s, aprobaste el semestre con una %c de %i puntos\n\n",nm,nt,p);
		}
		if((p>=81)&&(p<=90))
		{
			nt='B';
			printf("%s, aprobaste el semestre con una %c de %i puntos\n\n",nm,nt,p);
		}
		if((p>=91)&&(p<=100))
		{
			nt='A';
			printf("%s, aprobaste el semestre con una %c de %i puntos\n\n",nm,nt,p);
		}
		}
	else if (p<=60)
		{
		printf("%s, reprobaste el semestre con una F de %i puntos. \n\nEstudia mas para la proxima\n\n",nm,p);
		}

	return 0;
}

