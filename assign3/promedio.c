#include<stdio.h>
#include<stdlib.h>

int main()

{

	int a,b,c,p;
	char * nm[10],ap[10];

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

	p=a+b+c/3;

	if(p>60)
		{
		if((p>=61)&&(p<=70))
			{
			printf("%s, aprobaste el semestre con una D de %i puntos",nm,p);
			}
		else if((p>=71)&&(p<=80))
			{
			printf("%s, aprobaste el semestre con una C de %i puntos",nm,p);
			}
		else if((p>=81)&&(p<=90))
			{
			printf("%s, aprobaste el semestre con una B de %i puntos",nm,p);
			}
		else if((p>=91)&&(p<=100))
			{
			printf("%s, aprobaste el semestre con una A de %i puntos",nm,p);
			}
		}
	else if (p<=60)
		{
		printf("%s, reprobaste el semestre con una F de %i puntos. \n\nEstudia mas para la proxima",nm,p);
		}

	return 0;
}

