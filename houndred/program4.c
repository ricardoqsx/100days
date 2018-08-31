#include<stdio.h>
#include<math.h>

int main()

{
	int raiz;
	float re;

	printf("\n\n Hola! este programa calculara la raiz cuadrada de un numero\n\n");

	printf("Escriba el numero para ver su raiz cuadrada: ");
	scanf("%i",&raiz);

	re=sqrt(raiz);

	if(raiz<0)
	{
		printf("\nLa raiz cuadrada de %i es imaginaria (%.2f)",raiz,re);
	}
	else
	{

		printf("\nLa raiz cuadrada de %i es: %.2f\n\n",raiz,re);
	}

return 0;
}