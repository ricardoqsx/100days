#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a,b,c,r;

	system("clear");

	printf("\nLas notas este semestre van asi:\nPrimera 2 Segunda nota 30%\nTercera nota 40%, Buena Suerte!\n\n");

	printf("Escriba la primera nota: ");
	scanf("%f",&a);
	a=((a/30)*100);

	printf("Escriba la segunda nota: ");
	scanf("%f",&b);
	b=((b/30)*100);

	printf("Escriba la tercera nota: ");
	scanf("%f",&c);
	c=((c/40)*100);

	r=((a+b+c)/3)*100;

	if(r==100)
	{
		printf("\n\nEs usted un excelente alumno!\n\n");
	}
	else if(r>=70)
	{
		printf("\n\nAprobo el semestre, felicidades!\n\n");
	}
	else
	{
		printf("\n\n Reprobo el semestre, lo sentimos :(\n\n");
	}

	return 0;
}