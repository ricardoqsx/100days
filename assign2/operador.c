#include<stdio.h>
#include<stdlib.h>

#define bv "\n\nBienvenido, este programa sumara o restara 2 numeros!\n\n"

int main()

{
	char op[2],nm[10],ap[10];
	float a,b,c;
	printf(bv);

	printf("Introduzca su nombre: ");
	scanf("%s",&nm);
	printf("Ahora su apellido: ");
	scanf("%s",&ap);

	printf("Bien %s! Ahora prosigamos con el proceso:\n\n",nm);

	printf("Digite el primer numero: ");
	scanf("%f",&a);
	printf("Digite el segundo numero: ");
	scanf("%f",&b);

	printf("Introduzca el simbolo de la operacion a realizar: ");
	scanf("%s",&op);

	if(op=="+")
	{
	c=(a+b);
	printf("\n\n%s, el resultado de la suma es: %.2f",nm,c);
	}
	else if(op=="-")
	{
	c=(a-b);
	printf("\n\n%s, el resultado de la resta es: %.2f",nm,c);
	}

return 0;
}
