// minicalculadora (RICQUI03.c)
// incluir la biblioteca que se necesita
#define UTP "Universidad Tecnologica de Panama"
#define FISC "Facultad de Ingenieria en Sistemas Computacionales"
#define EST "Ricardo Quiroz S."
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

// declarar la variable que se utilizara

 float cant1, cant2, sum,rest,mult,div,pot,raiz;

 // activar ciclo repetitivo
 int contador=1;

 while (contador<=2)
 {

// asignar colores, limpiar pantalla e imprimir cabecera

textbackground(RED);
window(5,2,75,10);
clrscr();
textbackground(GREEN);
textcolor(YELLOW);

gotoxy(10,1); printf(UTP);
gotoxy(10,2); printf(FISC);
gotoxy(10,3); printf(EST);
gotoxy(50,3); printf("Ciclo #: %d", contador);
// solicitar datos de entrada

window(10,12,60,18);
textbackground(BLUE);
textcolor(GREEN);

clrsrc();
gotoxy(10,5); printf("introduzca el primer numero: ");
scanf("%f", &cant1);
gotoxy(10,6); printf ("introduzca el segundo numero: ");
scanf("%f", &cant2);

// realizar los calculos

sum=cant1+cant2;         // la suma de 2 sumeros
rest=cant1-cant2;        // la resta de 2 numeros
mult=cant1*cant2;        // la multiplicacion de 2 numeros
div=cant1/cant2;         // la division de 2 numeros
pot=pow((cant1),cant2);  //elevamos a potencia
raiz=pow(cant1,1/cant2); // obtenemos la raiz

gotoxy(10,8); printf("El resultado de la suma es: %.2f", sum);
gotoxy(10,9); printf("El resultado de la resta es: %.2f", rest);
gotoxy(10,10); printf("El resultado de la multiplicacion es: %.2f", mult);
gotoxy(10,11); printf("El resultado de la division es: %.2f", div);
gotoxy(10,12); printf("El resultado de la potencia es: %.2f", pot);
gotoxy(10,13); printf("El resultado de la raiz es: %.2f", raiz);
getch();

// incrementar ciclo repetitivo

++contador;

}

return 0;

}