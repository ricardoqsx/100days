#include<stdio.h>
#include<conio.h>
#define UTP "Universidad Tecnologica de Panama"
#define FISC "Facultad de Ingenieria en Sistemas Computacionales"
#define EST "Ricardo Quiroz S. 3-727-895"


main()

{

float a,b,c,d,e,f,prom;
int cont=1;

textbackground(RED);
textcolor(YELLOW);

while (cont<=2)

{
clrscr();

gotoxy(23,2); printf(UTP);
gotoxy(15,3); printf(FISC);
printf("\n Calcular el promedio de 6 notas");
gotoxy(50,4);printf("Ciclo # %i",cont);
printf("\n\n Ingrese la primera nota: ");
scanf("%f",&a);
printf("\n Ingrese la segunda nota: ");
scanf("%f",&b);
printf("\n Ingrese la tercera nota: ");
scanf("%f",&c);
printf("\n Ingrese la cuarta nota: ");
scanf("%f",&d);
printf("\n Ingrese la quinta nota: ");
scanf("%f",&e);
printf("\n Ingrese la sexta nota: ");
scanf("%f",&f);
prom=(a+b+c+d+e+f)/6;

printf("\n   El Promedio es: %.2f",prom);
gotoxy(26,24); printf(EST);



getch();

++cont;

clrscr();

}

}