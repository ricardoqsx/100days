#include<stdio.h>
#include<stdlib.h>

int main()
{
	/* code */

	int sal, h;

	system("clear");

	printf("\n\nEscriba su salario: ");
	scanf("%i",&sal);

	printf("Cantidad de hijos?:");
	scanf("%i",&h);

	if((sal>12000)||
		((sal<=12000)&&(sal>10000)&&(h<=2))||
		((sal<=10000)&&(sal>=8000)&&(h==0)))
	{
		printf("\n\nSu credito ha sido aprobado!\n\n");
	}
	else
	{
		printf("\n\nSu credito ha sido denegado\n\n");		
	}

	return 0;
}