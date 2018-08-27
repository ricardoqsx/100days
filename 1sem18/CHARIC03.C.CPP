/* Calculadora (Programa ChaRic03) */
/* Incluir las bibliotecas que se necesitan */
/* Definir las variables designadas */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define UTP "Universidad Tecnologica de Panama"
#define FISC "Facultad de Ingenieria en Sistemas Computacionales"
#define EST "Chanel Richard"

main()
{
  /* Declarar las variables que se utilizan */
  float cantidad1, cantidad2, suma, rest, mult, divi, pote, raiz;
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
  gotoxy(10,2); printf("Introduzca la primera cantidad: ");
  scanf("%f", &cantidad1);
  gotoxy(10,4); printf("Introduzca la segunda cantidad: ");
  scanf("%f", &cantidad2);

  /* Realizar los calculos (PROCESO) */
  suma = cantidad1 + cantidad2;
  rest = cantidad1 - cantidad2;
  mult = cantidad1 * cantidad2;
  divi = cantidad1 / cantidad2;
  pote = pow((cantidad1), cantidad2);
  raiz = pow(cantidad1, 1/cantidad2);

  /* Escribir los valores calculados (SALIDA) */
  window(15, 18, 56, 25);
  textbackground(10);
  textcolor(12);
  clrscr();
  gotoxy(10,1); printf("La suma es: %.2f", suma);
  gotoxy(10,2); printf("La resta es: %.2f", rest);
  gotoxy(10,3); printf("La multiplicacion es: %.2f", mult);
  gotoxy(10,4); printf("La division es: %.2f", divi);
  gotoxy(10,5); printf("La la potencia es: %.2f", pote);
  gotoxy(10,6); printf("La raiz es: %.2f", raiz);

  getch();
  /* Incrementar ciclo repetitivo */
  ++contador;
  return 0;
  }
 }