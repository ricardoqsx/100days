/* Minicalculadora */
/* incluir la bibliotecas que se necesitan */
#include<stdio.h>
#include<conio.h>
int main()
{
   /* Declarar las variables que utilizan */
float A,B,C,D,E,F;


   /* Asignar colores,  limpiar pantalla e imprimir cabeceras  */
   textbackground(GREEN);
   textcolor(BLUE);
   clrscr();

 gotoxy(20,2);printf(" Universidad Tecnologica de Panama ");
 gotoxy(20,4);printf(" Facultad de Ingenieria Computacional");
  gotoxy(20,6);printf(" Estudiante: Ricardo Quiroz S.");
   /* solicitar los datos de entradas (ENTRADA)  */



    printf(" introduzca el primer  numero: ");
   scanf("%d" , &A);

   printf(" introduzca el segundo numero: ");
   scanf("%d" , &B);
   /* Realizar los calculos (PROCESO) */
   C = A + B;
   D = A - B;
   E = A * B;
   F = A / B;
   /* Escribir los valores calculados (SALIDA)  */
     gotoxy(20,8);printf("  La suma es: %d" , C );
 gotoxy(20,10);printf("  La resta es: %d",  D );
 gotoxy(20,12);printf("  La multiplicacion: %d" , E);
   gotoxy(20,14); printf("  La division es : %d" , F  );
   getch();
   return 0;
}

