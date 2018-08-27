#include<stdio.h>
#include<conio.h>
#define UTP "Universidad Tecnologica de Panama"
#define FISC "Facultad de Ingenieria en Sistemas Computacionales"
#define EST "Ricardo Quiroz S."

int main()

{

	float a,b,c,d,e,f,g,h;
	int count=1;

	gotoxy(20,2); printf(UTP);
	gotoxy(20,4); printf(FISC);
	gotoxy(20,6); printf(EST);
	
	gotoxy(50,6); printf("ciclo #: %d", count);

while (count<=2)
{
	textbackground(RED);
	textcolor(YELLOW);
	clrscr();

	gotoxy(20,8); printf("Introduzca el primer digito: ");
	scanf("%d",&a);
	gotoxy(20,10); printf("Introduzca el primer digito: ");
	scanf("%d",&b);

	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=pow((a),b);	
	h=sqrt(a,1/b);
	
	gotoxy(20,12); printf("El resultado de la suma es: %.2f",c);
	gotoxy(20,13); printf("El resultado de la resta es: %.2f",d);
	gotoxy(20,14); printf("El resultado de la multiplicacion es: %.2f",e);
	gotoxy(20,15); printf("El resultado de la division es: %.2f",f);
	gotoxy(20,16); printf("El resultado de la potenciacion es: %.2f",g);
	gotoxy(20,17); printf("El resultado de la raiz cuadrada es: %.2f",h);	

	
}
	return 0;
getch();
}