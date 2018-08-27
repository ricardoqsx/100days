/*RICQUI06 resumen y conocimientos adicionales*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

main()

{

/* Definir constantes simbolicas */

#define UTP "Universidad Tecnologica de Panama"
#define FISC "Facultad de Ingenieria en Sistemas Computacionales"
#define EST "Ricardo Quiroz S. 3-727-895 RICQUI06"
#define MENU "Seleccione la opcion que desea en este menu"
#define INTERES "1.- Problema Sencillo de Interes Compuesto"
#define PASO "2.- Pasaste la materia?"
#define PR "3.- calcular el impuesto total de una compra"
#define P2 "4.- Calcular el promedio de 3 notas"
#define FINALIZAR "5.- F I N A L I Z A R "

/*declarar variables*/

float prin,rata,anios,inte,futu;
float ap;
float a,b,c,prom;
float total,imp;
char opcion='s';

/* ciclo repetitivo hasta que no desee continuar */

do
{

/*Ricardo Quiroz S.*/

/*LEER DATOS DE ENTRADA*/

textbackground(GREEN); textcolor(YELLOW);
clrscr();
gotoxy(23,2); printf(UTP);
gotoxy(28,4); printf(FISC);
gotoxy(23,6); printf(EST);
gotoxy(18,10); printf(MENU);
gotoxy(18,12); printf(INTERES);
gotoxy(18,14); printf(PASO);
gotoxy(18,16); printf(PR);
gotoxy(18,18); printf(P2);
gotoxy(25,20); printf(FINALIZAR"         ");
opcion=getche();
switch (opcion)

{

	/*Ricardo Quiroz S.*/

case '1':
textbackground(YELLOW); textcolor(BLUE);
clrscr();
gotoxy(23,2); printf(UTP);
gotoxy(28,4); printf(FISC);
gotoxy(23,6); printf(EST);
gotoxy(18,10); printf(MENU);
gotoxy(18,12); printf(INTERES);
gotoxy(14,12); printf("Introduzca la cantidad principal (prin): ");
scanf("%f", &prin);
gotoxy(25,14); printf("Introduzca el interes (rata): ");
scanf("%f", &rata);
gotoxy(18,16); printf("introduzca el numero de anios (anios): ");
scanf("%f", &anios);

inte = rata/100;
futu=prin*pow((1+inte),anios);
gotoxy(29,18); printf("el valor final (futu) es: %.2f", futu);
break;

		/*Ricardo Quiroz S.*/
case '2':
textbackground(RED); textcolor(YELLOW);
clrscr();
gotoxy(23,2); printf(UTP);
gotoxy(28,4); printf(FISC);
gotoxy(23,6); printf(EST);
gotoxy(18,14); printf(PASO);
gotoxy(17,10); printf("Digite su nota para saber si aprobo la materia: ");
scanf("%f",&ap);

if (ap>61) gotoxy(17,11) printf("aprobaste la materia con: %.2f",ap);
else
if (ap<61) gotoxy(17,11) printf("Reprobaste la materia con: %.2f",ap);

break;

case '3':
textbackground(BLACK); textcolor(YELLOW);
clrscr();
gotoxy(23,2); printf(UTP);
gotoxy(28,4); printf(FISC);
gotoxy(23,6); printf(EST);
gotoxy(18,16); printf(PR);
gotoxy(17,10); printf("Digite el total de compra: ");
scanf("%f",&total);

imp=(total*0.07)+total;

gotoxy(17,11); printf("El total de compra impuesto incluido es: %.2f",imp);

break;

case '4':
textbackground(RED); textcolor(YELLOW);
clrscr();
gotoxy(23,2); printf(UTP);
gotoxy(28,4); printf(FISC);
gotoxy(23,6); printf(EST);
gotoxy(18,16); printf(P2);
gotoxy(17,10); printf("Introduzca la primera nota: ");
scanf("%f",&a);
gotoxy(17,11); printf("Introduzca la segunda nota: ");
scanf("%f",&b);
gotoxy(17,12); printf("Introduzca la tercera nota: ");
scanf("%f",&c);

prom=(a+b+c)/3;

gotoxy(17,13); printf("El promedio total es: %.2f ",prom);


break;

case '5':
exit(0);
break;

			/*Ricardo Quiroz S.*/

}

printf("\n\n\t\t	DESEA CONTINUAR (s/n)");
opcion=getche();

}

while (opcion == 's' || opcion == 'S');
getche();

}

				/*Ricardo Quiroz S.*/