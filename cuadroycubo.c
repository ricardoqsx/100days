#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//inicio
int main()
{
// definir variables
int a,b,c;
//system("clear");
// escribir Bienvenido, este programa lee un numero y \nmuestra su resultado al cuadrado y al cubo
printf("\n\n Bienvenido, este programa lee un numero y \nmuestra su resultado al cuadrado y al cubo \n\n");
// escribir "Ingrese el numero que desea ver al cuadrado y el cubo: "
printf("Ingrese el numero que desea ver al cuadrado y el cubo: ");
//leer variable a
scanf("%d",&a);
// hacer b <- variable a ** 2
b=pow(a,2);
// hacer c <- variable a ** 3
c=pow(a,3);
// Escribir "el cuadrado de variable a es", b
printf("\n\nEl cuadrado de %d es: %d \n",a,b);
// Escribir "el cubo de la variable a es", c
printf("El cubo de %d es: %d \n\n",a,c);
// fin
//system("clear");
return 0;
}
