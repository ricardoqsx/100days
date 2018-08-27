#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//inicio
int main ()
{
//declarar variables a,b,c
float a,b,c,d,e;
//system("clear");
printf("\n\nBienvenido, este programa suma 2 numeros, \nlos potencia a 2 y divide entre 3\n\n");
// escribir "Escriba el primer valor entero"
printf("Escriba el primer valor entero: ");
// leer el dato a
scanf("%f",&a);
// escribir el segundo valor entero
printf("Escriba el segundo valor entero: ");
// leer b
scanf("%f",&b);
// hacer  c <- (a+b) ** 2 / 3;
c=pow((a+b),2)/3;
// escribir "el resultado es", c
printf("\n\nEl resultado es: %.2f \n\n", c);
// fin
//system("clear");
return 0;
}
