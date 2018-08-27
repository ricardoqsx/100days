#define titulo "\E[1m Este programa sirve para saber segun tus notas, cuanto sacaras en promedio en el semestre \E[37m \n\n"
#define instruct "por favor coloque la cantidad total de notas, luego las notas, y de pedirle mas notas el programa, rellenelo con ceros \n\n"
#include<stdio.h>

int main()

{
	float cnt, n1, n2, n3, n4, n5, tl, prm;

	printf(titulo);
	printf(instruct);

	printf("\n Introduzca la cantidad de notas a promediar: ");
	scanf("%f",&cnt);

	printf("\n Introduzca la 1era nota: ");
	scanf("%f",&n1);

	printf("\n Introduzca la 2nda nota: ");
	scanf("%f",&n2);

	printf("\n Introduzca la 3era nota; ");
	scanf("%f",&n3);

	printf("\n Introduzca la 4ta nota: ");
	scanf("%f",&n4);

	printf("\n Introduzca la 5ta nota: ");
	scanf("%f",&n5);

	tl=n1+n2+n3+n4+n5;

	prm=tl/cnt;

	if (prm>=61 && prm<=70)
	{
		printf("Tendras que repetir la materia, pero podras continuar tu carrera, ya que sacaste %.2f puntos\n\n",prm);
	}
	else
	if (prm>=71 && prm<=80)
	{
		printf("\n Estas pasando con C de %.2f puntos \n\n",prm);
	}
	else
	if(prm>=81 && prm<=90)
	{
		printf("\n Estas pasando con B de %.2f puntos \n\n",prm);
	}
	else
	if(prm>=91 && prm<=100)
	{
		printf("\n Estas pasando con A de %.2f puntos \n\n",prm);
	}
	else
	if (prm<60)
	{
		printf("Lo sentimos, estas fracasado en el semestre con %.2f puntos \n\n",prm);
	}

	return 0;
}
