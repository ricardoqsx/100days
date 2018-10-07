#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	int i,s=0,n=0,a=0,c;
	float cal;
	char nom[25],r[3];

	system("clear");

	printf("\nVotacion sobre TLC\n\n");

	printf("Nombre del Realizador: ");
	gets(nom);

	fpurge(stdin);

	printf("\nLa cantidad de diputados a encuestar: ");
	scanf("%i",&c);

	cal=(c*100)/100;

	fpurge(stdin);

	for(i=1;i<=c;i++)
	{
		printf("\nConteste con 'si', 'no' o 'abs' para abstenciones\nEsta usted a favor del TCL?: ");
		scanf("%s",r);

		if(strcmp(r,"si")==0)
		{
			s++;
		}
		else if(strcmp(r,"no")==0)
		{
			n++;
		}
		else if(strcmp(r,"abs")==0)
		{
			a++;
		}
	}

	printf("\nHan Finalizado las encuestas,\nse registraron %i votos, %i aprobaciones, %i en contra y %i abstenciones\n\n",c,s,n,a);



	return 0;
}