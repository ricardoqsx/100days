#include<stdio.h>
#include<stdlib.h>
//inicio
int main()
{
int cant;
float precio, total;
//system("clear");
// Escribir "bienvenido, aqui veras el precio total de un producto"
printf("\n\n Bienvenido, aqui veras el precio total de un producto \n\n");

// escribir "por favor introduzca la cantidad"
printf("Por favor introduzca la cantidad: ");
// leer cant
scanf("%d", &cant);

// escribir "por favor introduzca el precio del producto", precio
printf("Por favor introduzca el precio del producto: ");
// leer precio
scanf("%f", &precio);

printf("\n la cantidad de productos en esta ocasion es: %d",cant);
printf("\n el precio del producto esta vez es de: %.2f \n",precio);

// hacer total <- (cant*precio)*1.07
total=(cant*precio)*1.07;

// escribir "el total a pagar por su compra es: ", total
printf("\n El total a pagar por su compra es: %.2f \n\n", total);

//fin
//system("clear");
return 0;
}
