#include<stdio.h>
#include<stdlib.h>
//inicio
int main()
{
//se declaran las variables 
//'a' dato simple numero entero,
//'b' dato simple numero entero
int a,b,c;
// escribir introduzca el primer numero entero
//system("clear");

printf("\n\nBienvenido, este programa multiplica 2 numeros \ny muestra el resultado\n");

printf("\nIntroduzca el primer numero: ");
// leer el numero entero
scanf("%d",&a);
// escribir introduzca el segundo numero entero
printf("Introduzca el segundo numero: ");
// leer el numero entero
scanf("%d",&b);
// hacer c <-a+b
c=a*b;
// escribir ""el resultado es", c
printf("\n El resultado es: %d\n\n",c);
// fin
//system("clear");
return 0;
}
