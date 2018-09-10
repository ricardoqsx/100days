#include<stdio.h>
#include<stdlib.h>

int main()

{

	// ingresos del solicitante, hijos
	float i;
	int h;

// limpia pantalla
	system("cls");

	printf("\n\nBienvenido, este programa te dira si tu prestamo será aprobado");

	printf("\n\nIntroduzca su salario anual: ");
	scanf("%f",&i);

	printf("Cuantos hijos tiene?: ");
	scanf("%i",&h);

//	i=i*12;

	if(i>12000)
	{
		printf("\n\nSu credito ha sido concedido!\n\n");
	}
	else if ((i<=12000)&&(i>=10000))
	{
		if(h<=2)
		{
			printf("\n\nSu credito ha sido concedido!\n\n");
		}
		else
		{
			printf("\n\nSu credito ha sido denegado, lo sentimos");
		}
	}
	else if((i>=8000)&&(i<=10000))
	{
		if(h=0)
		{
			printf("\n\nSu credito ha sido concedido!\n\n");			
		}
		else
		{
			printf("\n\nSu credito ha sido denegado, lo sentimos");
		}

	}
	else
	{
		printf("\n\nSu credito ha sido denegado, lo sentimos");
	}

	return 0;
}