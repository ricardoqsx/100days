#include<stdio.h>
#include<stdlib.h>

#define bv "\n\nBienvenido, este programa sumara o restara 2 numeros!\n\n"

int main()

{
	char op,nm[10],ap[10];
	float a,b,c;
	printf(bv);

	printf("Introduzca su nombre: ");
	fgets(nm,10,stdin);
	printf("Ahora su apellido: ");
	fgets(ap,10,stdin);

	printf("Bien %s! Ahora prosigamos con el proceso:\n\n");

	printf("Digite el primer numero: ");
	scanf("%f",&a);
	printf("Digite el segundo numero: ");
	scanf("%f",&b);

	printf("Introduzca el simbolo de la operacion a realizar: ");
	scanf("%c",&op);

	if(op='+')
	{
	c=a+b;
	printf("%s, el resultado de la suma es: %.2f",nm,c);
	}
	else if(op='-')
	{
	c=a-b;
	printf("%s, el resultado de la resta es: %.2f ",nm,c);
	}

return 0;
}
