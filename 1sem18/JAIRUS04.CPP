/* CALCULAR EL PROMEDIO DE 3 NOTAS */
#include<stdio.h>
#include<conio.h>
#define UTP "Universidad Tecnologica de Panama"
#define FISC "Facultad de Ingenieria en Sistemas Computacionales"
#define EST  "Jairo Russell 8-413-500 jairus04"
#define CPD3N "Calcular el Promedio de 3 notas"

main()
{

  float A, B, C, D, E, F, PROM;
  int contador = 1;
  while (contador<=2)
  {
  textbackground (RED);
  textcolor(YELLOW);
  clrscr();
  gotoxy(23,2); printf(UTP);
  gotoxy(15,3); printf(FISC);
  gotoxy(24,4); printf(CPD3N);
  printf("\n\n Ingrese la primera Nota: ");
  scanf ("%f", &A);
  printf("\n\n Ingrese la segunda Nota: ");
  scanf ("%f", &B);
  printf("\n\n Ingrese la Tercera Nota: ");
  scanf ("%f", &C);
  printf("\n\n Ingrese la Cuarta Nota: ");
  scanf ("%f", &D);
  printf("\n\n Ingrese la Quinta Nota: ");
  scanf ("%f", &E);
  printf("\n\n Ingrese la Sexta Nota: ");
  scanf ("%f", &F);
  PROM = (A+B+C+D+E+F)/6;
  printf("\n   El promedio es:%.2f",PROM);
  printf("\n\n Jairo Russell 8-413-500 jairus04");
  getch();
  ++contador;
  }
}

