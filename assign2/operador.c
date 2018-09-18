#include<stdio.h>
#include<stdlib.h>

#define bv "\n\nBienvenido, este programa sumara o restara 2 numeros!\n\n"

// inicio
int main()

{
// declaracion de variables, flotantes a,b,; char op,nm,ap;
	char op[2],nm[10],ap[10];
	float a,b,c;
// Escribir bv
	printf(bv);
// Escribir Introduzca su nombre
	printf("Introduzca su nombre: ");
// leer nm
	scanf("%s",&nm);
// Escribir ahora su apellido
	printf("Ahora su apellido: ");
// leer ap
	scanf("%s",&ap);
// Escribir bien nm! ahora prosigamos con el proceso: 
	printf("\n\nBien %s! Ahora prosigamos con el proceso:\n\n",nm);
// digite el primer numero
	printf("Digite el primer numero: ");
// leer a
	scanf("%f",&a);
// Escribir Digite el segundo numero
	printf("Digite el segundo numero: ");
// leer b
	scanf("%f",&b);
// Escribir Introduzca el simbolo de la operacion a realizar: 
	printf("Introduzca el simbolo de la operacion a realizar: ");
// leer op
	scanf("%s",&op);

/* comentario: si (funcion strcmp para comparar cadenas)
 de la variable op es igual al simbolo entre comillas
 (declarandolo como igual a cero), realizara la
 operacion, en caso de poner igual a 1 significaria que
 op y el simbolo entre las comillas es distinto */

// si op es igual a +
	if(strcmp(op,"+")==0)
	{
// hacer c=a+b
	c=(a+b);
// Escribir El resultado de la suma es C
	printf("\n\n%s, el resultado de la suma es: %.1f\n\n",nm,c);
	}
// de otro modo, si op es igual a -
	else if(strcmp(op,"-")==0)
	{
// hacer c=a-b;
	c=(a-b);
// Escribir El resultado de la resta es: 
	printf("\n\n%s, el resultado de la resta es: %.1f \n\n",nm,c);
	}
// fin si
return 0;
}
// fin