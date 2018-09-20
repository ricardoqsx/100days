#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

	float psd, pcd;
	char a[]="sedan",b[]="pickup",c[]="camioneta",d[]="deportivo",e;

	system("clear");

	printf("\n\nBienvenido!, segun el tipo de auto te diremos cual es el valor\ndel auto que quieres comprar\n\n");
	printf("Seleccione un tipo de auto: ");
	printf("\n Opcion A: %s\n Opcion B: %s\n Opcion C: %s\n Opcion D: %s",a,b,c,d);
	printf("\n\nSeleccione una opcion en minuscula: ");
	scanf("%c",e);
//	setbuf(stdin,NULL);
	fpurge(stdin);
	printf("\nDiganos el precio del auto: ");
	scanf("%f",&psd);
//	setbuf(stdin,NULL);
	fpurge(stdin);

	if(e=='a')
	{
		pcd=psd+(psd*0.10);
		printf("\nComo nos comenta, el costo del vehiculo %s es de %.1f dolares, tendria que pagar %.1f",a,psd,pcd);
	}
	else if(e=='b')
	{
		pcd=psd+(psd*0.12);
		printf("\nComo nos comenta, el costo del vehiculo %s es de %.1f dolares, tendria que pagar %.1f",b,psd,pcd);
	}
	else if(e=='c')
	{
		pcd=psd+(psd*0.05);
		printf("\nComo nos comenta, el costo del vehiculo %s es de %.1f dolares, tendria que pagar %.1f",c,psd,pcd);
	}
	else if(e=='d')
	{
		pcd=psd+(psd*0.02);
		printf("\nComo nos comenta, el costo del vehiculo %s es de %.1f dolares, tendria que pagar %.1f",d,psd,pcd);
	}

	return 0;
}
