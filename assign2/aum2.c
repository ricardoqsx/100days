#include<stdio.h>
#include<stdlib.h>
#define bienv "\nBienvenido, este programa calcula su aumento de salario\n\n"
// inicio
int main()
{
	#ifdef __linux__
	system("clear");
	#endif

	#ifdef _WIN32
	system("cls");
	#endif

	#ifdef __APPLE__
	system("clear");
	#endif
// declaracion de variables float sal,newsal; char nombre[30];
	float sal, newsal;
	char nombre[30];
// Escribir macro bienv
	printf(bienv);
// Escribir Escriba su nombre completo: 
	printf("\nEscriba su nombre completo: ");
// leer nombre
	gets(nombre);
// Escribir Digite su salario
	printf("Digite su salario: ");
//leer sal
	scanf("%f",&sal);
// si sal es menor a 1000
	if (sal<1000)
	{
// hacer newsal=(sal*0.15)+sal
		newsal=(sal*0.15)+sal;
// Escribir nombre, su nuevo salario es de newsal dolares!
		printf("\n%s, su nuevo salario es de %.2f dolares!\n\n",nombre,newsal);
	}
// de lo contrario
	else
// si sal es mayor o igual a 1000
		if(sal>=1000)
	{
// hacer newsal=(sal*0.07)+sal;
		newsal=(sal*0.07)+sal;
// nombre, su nuevo salario es de newsal dolares;
		printf("\n%s, su nuevo salario es de %.2f dolares!\n\n",nombre,newsal);
	}
// fin si


return 0;
}
// fin