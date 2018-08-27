/* CALCULAR EL PROMEDIO DE 3 NOTAS */
#include<stdio.h>
#include<conio.h>
main()
{
float A,B,C,D,E,F, PROM;
clrscr();
gotoxy(23,2); printf("Universidad Tecnologica de Panam ");
gotoxy(15,4); printf("Facultad de Ingenier¡a de Sistemas Computacionales");
gotoxy(24,5); printf("Calcular el Promedio de 3 Notas");
printf("\n\n Ingrese la Primera Nota: ");
scanf("%f",&A);
printf("\n Ingrese la Segunda Nota: ");
scanf("%f",&B);
printf("\n Ingrese la Tercera Nota: ");
scanf("%f",&C);
printf("\n Ingrese la Cuarta Nota: ");
scanf("%f",&D);
printf("\n Ingrese la Quiunta Nota: ");
scanf("%f",&E);
printf("\n Ingrese la Sexta Nota: ");
scanf("%f",&F);
PROM = (A + B + C + D + E + F) / 6;
printf("\n El Promedio es: %.2f", PROM);
printf("\n\n Jorge Abdiel Gonzalez  4-757-1737  jorgon06");
getch();
}
