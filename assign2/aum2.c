#include<stdio.h>
#include<stdlib.h>
#define bienv "\nBienvenido, este programa calcula su aumento de salario\n\n"
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

	float sal, newsal;
	char nombre[30];

	printf(bienv);
	printf("\nEscriba su nombre completo: ");
	gets(nombre);
	printf("Digite su salario: ");
	scanf("%f",&sal);

	if (sal<1000)
	{
		newsal=(sal*0.15)+sal;
		printf("\n%s, su nuevo salario es de %.2f dolares!\n\n",nombre,newsal);
	}
	else
		if(sal>=1000)
	{
		newsal=(sal*0.07)+sal;
		printf("\n%s, su nuevo salario es de %.2f dolares!\n\n",nombre,newsal);
	}




}