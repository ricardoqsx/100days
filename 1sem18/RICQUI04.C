/* Calculadora (Programa RICQUI.04) */
/* Incluir las bibliotecas que se necesitan */
/* Definir las variables designadas */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define UTP "Universidad Tecnologica de Panama"
#define FISC "Facultad de Ingenieria en Sistemas Computacionales"
#define EST "Ricardo Quiroz S."

main()
{
  /* Declarar las variables que se utilizan */
  float c,f;
  int contador=1;
/* activar ciclo repetitivo */
while (contador<=2)
 {

  /* Asignar colores, limpiar pantalla e imprimir cabeceras */
  textbackground(0); clrscr();
  window(5, 2, 75, 10);
  textbackground(CYAN);
  textcolor(BLUE);
  clrscr();
  gotoxy(10,2); printf(UTP);
  gotoxy(10,4); printf(FISC);
  gotoxy(10,6); printf(EST);
  gotoxy(40,6); printf("Ciclo #: %d", contador);

  /* Solicitar datos de entrada (ENTRADA) */
  window(10, 12, 60, 16);
  textbackground(4);
  textcolor(6);
  clrscr();
  gotoxy(10,2); printf("Introduzca los grados Celsius: ");
  scanf("%f", &f);

  /* Realizar los calculos (PROCESO) */
  c=(f-32)*5.0/9.0;

  /* Escribir los valores calculados (SALIDA) */
  window(15, 18, 56, 25);
  textbackground(10);
  textcolor(12);
  clrscr();
  gotoxy(10,1); printf("Los grados Farenheit serian: %.2f", c);

  getch();
  /* Incrementar ciclo repetitivo */
  ++contador;
  return 0;
  }
 }