/*Este es un programa en C*/
/*Creador: Ricardo Quiroz S.*/

#include<stdio.h>
#include<stdlib.h>

main()

{
	/*Declaracion de variables*/
int num1=20, num2=30, num3=100;
float promedio=86.74359;
char letra='R', nombre[]="Ricardo"; //un caracter, comillas simples, cadenas largas doble comilla

printf("Este es mi primer programa");
printf("El valor de num 1 es %i",num1);
printf("el valor de num2 es = %i \t y el de num3 es = %i",num2,num3);
printf("el promedio es: %.3f", promedio);
scanf("%f",&promedio);

printf("la letra es: %c",letra);
printf("\n mi nombre es %s",nombre);
printf("ingrese su nombre completo: ");

system("cls");
system("pause");

fflush(stdin); //ponerlo justo antes de la variable que se brinca
gets(nombre);
printf("mi nombre es: %s",nombre);

return 0;
}