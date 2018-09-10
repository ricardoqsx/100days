#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;

	system("clear");

	printf("\nLos numeros que escribas los imprimire en orden descendente\n\n");

	printf("Escriba el 1er valor: ");
	scanf("%i",&a);

	printf("Escriba el 2ndo valor: ");
	scanf("%i",&b);

	printf("Escriba el 3er valor: ");
	scanf("%i",&c);

	if((a>b)&&(b>c))
	{
		printf("\n\n%i\n%i\n%i\n",a,b,c);
	}
	else if((a>c)&&(c>b))
	{
		printf("\n\n%i\n%i\n%i\n\n",a,c,b);
	}
	else if((b>a)&&(a>c))
	{
		printf("\n\n%i\n%i\n%i\n\n",b,a,c);
	}
	else if((b>c)&&(c>a))
	{
		printf("\n\n%i\n%i\n%i\n\n",b,c,a);
	}
	else if((c>a)&&(a>b))
	{
		printf("\n\n%i\n%i\n%i\n\n",c,a,b);
	}
	else if((c>b)&&(b>a))
	{
		printf("\n\n%i\n%i\n%i\n\n",c,b,a);
	}
	else if((b>c)&&(b>a))
	{
		printf("\n\n%i\n%i\n%i\n\n",c,b,a);
	}

	return 0;
}