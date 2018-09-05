#include<stdio.h>
#include<stdlib.h>

int main()

{
	int a,b=0,c=0,d;

	system("clear");

	printf("\n\nBienvenido, este programa te pedira 10 numeros\nTe dira cuantos son pares y cuantos impares\n\n");


	for(d=0;d<=9;d++)
	{
		printf("Escriba un numero: ");
		scanf("%i",&a);
		if(a%2==0)
		{
			c++;
		}
		else
		{
			b++;
		}
	}

	printf("\n\n Introduciste 10 numeros, %i pares y %i impares\n\n",c,b);



	return 0;
}