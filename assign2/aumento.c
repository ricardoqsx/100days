#include<stdio.h>
#include<stdlib.h>
int main()
{

system("clear");
	float sal,nslr;
	char n[10], a[10];

	printf("\n\nBienvenido, este programa te dira si tendras un aumento!\n");

	printf("\nEscriba su nombre: ");
	scanf("%s",&n);
	printf("\nEscriba su apellido: ");
	scanf("%s",&a);
	printf("\nIntroduzca el salario del colaborador: ");
	scanf("%f",&sal);

	if(sal<1000)
	{
//		nslr=(sal/1.15)+sal;
		nslr=(sal*0.15)+sal;
		printf("%s %s, su nuevo salario es %.2f dolares\n\n",n,a,nslr);
	}
	else
	{
		printf("Lo sentimos, no aplica para este aumento :(\n\n");
	}

//sleep (5);

//system("clear");

return 0;
}
