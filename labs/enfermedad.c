#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	
	int enf,edad;
	float costo;

	system("clear");

	printf("\n\nBienvenido, este programa clasificara por tipo de enfermedad el costo del paciente");

	printf("\nPor favor, seleccione la opcion de enfermedad del listado a continuacion: \nTipo 1\nTipo 2\nTipo 3\nTipo 4\nIntroduzca la opcion a tratar: ");
	scanf("%i",&enf);

	fpurge(stdin);

	printf("\nIntroduzca la edad del paciente: ");
	scanf("%i",&edad);

	printf("\nGracias, el tipo de enfermedad es tipo %i y su edad es de %i años\n\n",enf,edad);

	fpurge(stdin);

	if(enf=='1')
	{
		if((edad>=14)&&(edad<=22))
		{
			costo=(25*0.10)*3650;
			printf("\nEl costo total en 10 años del paciente con enfermedad tipo %i y %i años es de %.2f",enf,edad,costo);
		}
	}

	return 0;
}