#include<stdio.h>
#include<stdlib.h>
//inicio
int main()
{

system("clear");
// declaracion de variables float sal,nslr; char n[10],a[10];
	float sal,nslr;
	char n[10], a[10];
// escribir Bienvenido, este programa te dira si tendras un aumento!
	printf("\n\nBienvenido, este programa te dira si tendras un aumento!\n");
// Escribir Escriba su nombre: 
	printf("\nEscriba su nombre: ");
// leer n
	scanf("%s",&n);
// Escribir Escriba su apellido: 
	printf("\nEscriba su apellido: ");
// leer a
	scanf("%s",&a);
// Escribir Introduzca el salario del colaborador: 
	printf("\nIntroduzca el salario del colaborador: ");
// leer sal
	scanf("%f",&sal);
// si salario es menor de 1000
	if(sal<1000)
	{
//		nslr=(sal/1.15)+sal;
		nslr=(sal*0.15)+sal;
// Escribir n a, su nuevo salario es nslr dolares
		printf("%s %s, su nuevo salario es %.2f dolares\n\n",n,a,nslr);
	}
// de lo contrario
	else
	{
// Escribir no sentimos, no aplica para este aumento :(
		printf("Lo sentimos, no aplica para este aumento :(\n\n");
	}
// fin si

//sleep (5);

//system("clear");

return 0;
}
// fin