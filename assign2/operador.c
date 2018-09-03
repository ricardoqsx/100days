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

	printf("\n\nBien %s! Ahora prosigamos con el proceso:\n\n",nm);

	printf("Digite el primer numero: ");
	scanf("%f",&a);
	printf("Digite el segundo numero: ");
	scanf("%f",&b);

	printf("Introduzca el simbolo de la operacion a realizar: ");
	scanf("%s",&op);

/* si (funcion strcmp para comparar cadenas)
 de la variable op es igual al simbolo entre comillas
 (declarandolo como igual a cero), realizara la
 operacion, en caso de poner igual a 1 significaria que
 op y el simbolo entre las comillas es distinto */

	if(strcmp(op,"+")==0)
	{
	c=(a+b);
	printf("\n\n%s, el resultado de la suma es: %.1f\n\n",nm,c);
	}
	else if(strcmp(op,"-")==0)
	{
	c=(a-b);
	printf("\n\n%s, el resultado de la resta es: %.1f \n\n",nm,c);
	}

return 0;
}
