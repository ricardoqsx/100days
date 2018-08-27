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
#define FAHRENH "2.- Convetir grados farenheit a centigrados"
#define FINALIZAR "3.- F I N A L I Z A R "

/*declarar variables*/

float prin,rata,anios,inte,futu;
float FAHR,CENT;
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
gotoxy(18,14); printf(FAHRENH);
gotoxy(18,16); printf(FINALIZAR"         ");
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
gotoxy(18,14); printf(FAHRENH);
gotoxy(17,10); printf("Introduzca los grados farenheit (FAHR): ");
scanf("%f", &FAHR);
CENT = 5.0/9.0 * (FAHR - 32);
gotoxy(23,14); printf("Los grados centigrados (CENT) son: %.2f",CENT);
break;

case '3':
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