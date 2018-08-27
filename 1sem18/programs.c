// RICQUI Resumen y conocimientos adicionales

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

main()

{
	// Definir constantes simbolicas
	#define UTP "Universidad Tecnologica de Panamá"
	#define FISC "Facultad de Ing. En Sistemas Computacionales"
	#define EST "Ricardo Quiroz S. 3-727-895"
	#define MENU "Seleccione la Opcion que desea de este menu"
	#define INTERES "1.- Problema Sencillo de interes compuesto"
	#define FAHRENH "2.- Convertir grados Farenheit a Centigrados"
	#define FIN "3.- F I N A L I Z A R"

	// Declarar Variables

	float prin,rata,anios,inte,futu;
	float FAHR,CENT;
	char opcion=s;
	do
	{

		// Ciclo repetitivo hasta que no desee continuar 1er salto terminado

		// leer Datos de entrada

		textbackground(GREEN); textcolor(YELLOW);
		clrscr();

		gotoxy(23,2); printf(UTP);
		gotoxy(28,4); printf(FISC);
		gotoxy(23,6); printf(EST);
		gotoxy(18,10); printf(MENU);
		gotoxy(18,12); printf(INTERES);
		gotoxy(18,14); printf(FAHRENH);
		gotoxy(18,16); printf(FINALIZAR"	");
		opcion=getche();
		switch (opcion)
		{

			case '1':
			textbackground(YELLOW); textcolor(BLUE);
			clrscr();
			gotoxy(23,2); printf(UTP);
			gotoxy(28,4); printf(FISC);
			gotoxy(23,6); printf(EST);
			gotoxy(18,10); printf(INTERES);
			gotoxy(14,12); printf("Introduzca la cantidad principal (prin): ");
			scanf("%f",&prin);
			gotoxy(25,14); printf("Introduzca el Interes (rata): ");
			scanf("%f",&rata);
			gotoxy(18,16); printf("Introduzca el numero de anios (anios): ");
			scanf("%f",&anios);

			inte=rata/100;
			futu=prin*pow((1+inte),anios);
			gotoxy(29,18); printf("El Valor final (futu) es: %.2f",futu);
	 		 break;

	 		 //segundo salto completado

	 		 case '2':
	 		 textbackground(RED); textcolor(YELLOW);
	 		 clrscr();
	 		 gotoxy(23,2); printf(UTP);
			 gotoxy(28,4); printf(FISC);
			 gotoxy(23,6); printf(EST);
			 gotoxy(17,10); printf(FAHRENH);
			 gotoxt("Introduzca los grados Farenheit (FAHR): ");
			 scanf("%f",&FAHR);
			 CENT=5/9*(FAHR-32);
			 gotoxy(23,14); printf("Los grados centigrados (CENT) son: %.2f",CENT);
			 break;

			 case '3':
			 exit(0);
			 break;

			 // tercer salto completado

		}

		printf("\n\n\t\t 	DESEA CONTINUAR (s/n)");
		opcion=getche();
	}

	while (opcion == 's' ||opcion == 'S');
	getche();
}

// 4to salto finalizado