
/*Incluir las bibliotecas que se necesitan */
#include <stdio.h>
#include <conio.h>
#include <math.h>
/*Definir las constantes simbolicas para las cabeceras*/
#define UTP "Universidad Tecnologica"
#define EST "Jairo Russell"

main()
{
float cant1, cant2, suma, resta, mult, div, pot, raiz;
int contador=1;
/*Activar ciclo repetitivo*/
while (contador<=2)
{
       clrscr();

textbackground(0); clrscr();
window(5,2,75,10);
textbackground(CYAN);
textcolor(BLUE);
clrscr();
       gotoxy(10,2); printf(UTP);
       gotoxy(10,4); printf(EST);
       gotoxy(10,6); printf("ciclo#: %d",contador);
       /*Declarar las variables que se utilizan*/
/*Asignar colores, Limpiar pantalla e imprimir cabecera*/
/*Limpiar pantalla e imprimir cabecera*/
window(10,12,60,16);
textbackground(4);
textcolor(6);
clrscr();

/*Solicitar los detalles de entrada*/
gotoxy(10,2); printf("Introduzca la primera cantidad: ");
scanf("%f", &cant1);
gotoxy(10,4); printf("Introduzca la segunda cantidad: ");
scanf("%f", &cant2);

suma = cant1 + cant2;
resta= cant1 - cant2;
mult = cant1 * cant2;
div  = cant1 / cant2;
pot  = pow((cant1), cant2); /*Elevamos a potencia*/

/*Imprimir pantalla e imprimir cabecera*/
/*escribir los valores calculados*/
window(15,18,70,24);
textbackground(6);
textcolor(4);
clrscr();
gotoxy(10,2); printf("la suma es: %.2f",suma);
gotoxy(10,4);printf("la resta es: %.2f",resta);
gotoxy(10,6);printf("la mult es: %.2f",mult);
gotoxy(10,8);printf("la div es: %.2f",div);
gotoxy(10,10);printf("la pot es: %.2f",pot);

getch();
/* Incrementar ciclo repetitivo*/
++contador;
}
}