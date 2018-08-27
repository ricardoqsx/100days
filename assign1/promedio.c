//programa que calcule la suma de 2 numeros y promedie el resultado
#include<stdio.h>
#include<stdlib.h>
//inicio
int main ()
{
// se declaran las variables flotantes dato simple a,b,c,d
float a, b, c, d;
//escribir los numeros flotantes o enteros
//system("clear");
printf("\n\nBienvenido, este programa calcula el promedio de 2 notas\n");
printf("\nEscriba su primera nota: ");
// leer numeros 1 y 2
scanf("%f",&a);
// escribir "su primera nota es", a, b
printf("Escriba su segunda nota: ");
scanf("%f",&b);
printf("\n\n su primera nota es: %.2f",a);
printf("\n Su segunda nota es: %.2f",b);
//hacer c<-a+b
c=a+b;
// Escribir "el resultado de la suma es", c
printf("\n el resultado de la suma entre 2 notas es: %.2f", c);
// hacer d<-c/2
d=c/2;
// escribir "el resultado del promedio es", d
printf("\n El resultado promedio es: %.2f \n\n",d);
// fin
return 0;
}
