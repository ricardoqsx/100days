//MENU DE PROGRAMA
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  //DEFINIR CONSTATES SIMBOLICAS
  #define UNIVERSIDAD "Universidad Tecnologica de Panama"
  #define FACULTAD    "Facultad de Ingenieria en Sistmas Computacionales"
  #define ESTUDIANTE  "Ricardo Quiroz S. 3-727-895 RICQUIC07"
  #define MENU        "Seleccione una opcion de este menu"
  #define RECTANGULO  "1.- CALCULAR EL AREA DEL RECTANGULO"
  #define PROME       "2.- CALCULAR EL PROMEDIO DE 6 NOTAS"
  #define POTENCIA    "3.- CALCULAR LA POTENCIA"
  #define CALCULADORA "4.- saber si pasaras el semestre"
  #define FINALIZAR   "5.- F I N A L I Z A R"
  //DECLARAR VARIABLES
  char opcion='s';
  //CICLO REPETITIVO ASTA QUE NO DESEE CONTINUAR
  do
  {
    //Ricardo Quiroz S.
    //LEER DATOS DE ENTRADA
    textbackground(0); clrscr();
    window(1,2,79,24);
    textbackground(BLUE);
    textcolor(GREEN);
    clrscr();
    gotoxy(18,4); printf(MENU);
    gotoxy(19,6); printf(RECTANGULO);
    gotoxy(19,8); printf(PROME);
    gotoxy(19,10); printf(POTENCIA);
    gotoxy(19,12); printf(CALCULADORA);
    gotoxy(19,14); printf(FINALIZAR"  ");
    opcion=getche();
    switch (opcion)
    {
     case '1':                                                                  //CALCULAR EL AREA DE UN RECTANGULO
     /*Declarar las variables que se utilizan*/
     int Ancho, Altura, Area;
     /*Limpiar pantalla e imprimir cabecera*/
     textbackground(0); clrscr();
     window(1,2,79,10);
     textbackground(CYAN);
     textcolor(BLUE);
     clrscr();
     gotoxy(23,2);  printf(UNIVERSIDAD);
     gotoxy(15,4);  printf(FACULTAD);
     gotoxy(25.5,6);  printf(ESTUDIANTE);
     gotoxy(22.5,8); printf(RECTANGULO);
     /*Solicitar datos (Entrada)*/
     window(1,12,79,16);
     textbackground(CYAN);
     textcolor(BLUE);
     clrscr();
     gotoxy(28,2); printf("Ingrese el Ancho:   ");
     scanf("%d", &Ancho);
     gotoxy(28,4); printf("Ingrese la Altura:  ");
     scanf("%d", &Altura);
     /*Realizar los calculos (Proceso)*/
     Area = (Ancho*Altura);
     /*Escribir los valores (Salida)*/
     window(1,18,79,24);
     textbackground(CYAN);
     textcolor(BLUE);
     clrscr();
     gotoxy(26.5,2); printf("El Area del rectangulo es: %d", Area);
     getch();
     break;

     case '2':                                                                  //CALCULAR PROMEDIO 6 NOTAS
     /*Declarar las variables que se utilizan*/
     float A, B, C, D, E, F, PROM;
     /*Limpiar pantalla e imprimir cabecera*/
     textbackground(0); clrscr();
     window(1,2,79,10);
     textbackground(RED);
     textcolor(YELLOW);
     clrscr();
     /*Solicitar datos (Entrada)*/
     gotoxy(23,2);  printf(UNIVERSIDAD);
     gotoxy(15,4);  printf(FACULTAD);
     gotoxy(25.5,6);  printf(ESTUDIANTE);
     gotoxy(22.5,8); printf(PROME);

     window(1,12,79,19);
     textbackground(RED);
     textcolor(YELLOW);
     clrscr();
     gotoxy(27,2); printf("Ingrese La Primera Nota: ");
     scanf("%f", &A);
     gotoxy(27,3); printf("Ingrese La Segunda Nota: ");
     scanf("%f", &B);
     gotoxy(27,4); printf("Ingrese La Tercera Nota: ");
     scanf("%f", &C);
     gotoxy(27,5); printf("Ingrese La  Cuarta Nota: ");
     scanf("%f", &D);
     gotoxy(27,6); printf("Ingrese La  Quinta Nota: ");
     scanf("%f", &E);
     gotoxy(27,7); printf("Ingrese La   Sexta Nota: ");
     scanf("%f", &F);
     /*Realizar los calculos (Proceso)*/
     PROM = (A+B+C+D+E+F)/6;

     window(1,21,79,24);
     textbackground(RED);
     textcolor(YELLOW);
     clrscr();
     /*Escribir los valores (Salida)*/
     gotoxy(18,2); printf("El Promedio es: %.2f", PROM);
     getch();
     break;

     case '3':                                                                  //ELEVAR UN NUMERO A LA SEGUNDA TERCERA Y CUARTA POTENCIA
     /*Declarar las variables que se utilizan*/
     float x,a,b,c;
     /*Limpiar pantalla e imprimir cabecera*/
     textbackground(CYAN);
     textcolor(BLUE);
     clrscr();
     gotoxy(23,2);  printf(UNIVERSIDAD);
     gotoxy(15,4);  printf(FACULTAD);
     gotoxy(23,6);  printf(ESTUDIANTE);
     gotoxy(10.5,10); printf(POTENCIA);
     /*Solicitar datos (Entrada)*/
     gotoxy(10.5,12); printf("Introduzca el Numero: ");
     scanf("%f",&x);
     /*Realizar los calculos (Proceso)*/
     a=pow(x,2);
     b=pow(x,3);
     c=pow(x,4);
     /*Escribir los valores (Salida)*/
     gotoxy(10.5,12); printf("La Potencia al Cuadrado es: %.2f",a);
     gotoxy(10.5,13); printf("    La Potencia al Cubo es: %.2f",b);
     gotoxy(10.5,14); printf("   Potencia a la cuarta es: %.2f",c);
     getch();
     break;

     case '4':                                                                  //MINI CALCULADORA
     //Declarar las variables que utilizan
     float cant1, cant2, suma, resta, multi, divi, pot, raiz;
     //Limpiar pantalla, Asignar colores e imprimir
     clrscr();
     textbackground(GRAY);
     textcolor(WHITE);
     clrscr();
     gotoxy(23,2);  printf(UNIVERSIDAD);
     gotoxy(15,4);  printf(FACULTAD);
     gotoxy(23,6);  printf(ESTUDIANTE);
     gotoxy(18,10); printf(CALCULADORA);
       //Solicitar los datos de entrada
     gotoxy(20,12); printf("Introduzca la primera cantidad: ");
     scanf("%f", &cant1);
     gotoxy(20,14); printf("Introduzca la segunda cantidad: ");
     scanf("%f", &cant2);
     //Realizar los calculos
     suma = cant1+cant2;
     resta = cant1-cant2;
     multi = cant1*cant2;
     divi = cant1/cant2;
     pot = pow((cant1),cant2); //elevando a la potencia
     raiz = pow(cant1,1/cant2); //obtenemos la raiz
     //Escribir los valores calculados
     gotoxy(20,16); printf("La Suma es: %.2f", suma);
     gotoxy(20,17); printf("La Resta es: %.2f", resta);
     gotoxy(20,18); printf("La Multiplicacion es: %.2f", multi);
     gotoxy(20,19); printf("La Divicion es: %.2f", divi);
     gotoxy(20,20); printf("La Potencia es: %.2f", pot);
     gotoxy(20,21); printf("La Raiz es: %.2f", raiz);
     getch();
     break;

     case '5':                                                                  //FINALIZAR
     exit(0);
     break;

     //Ricardo Quiroz S.

     }
      printf("\n\n\t\t\t   DESEA CONTINUAR (s/n) ");
      opcion = getche();
    }
    while (opcion == 's' ||opcion == 's');
    getche();
    return 0;
}
