/* ingresar por teclado el nombre, la edad
 y el sexo de cualquier persona,
y que imprima solo si la persona es de 
sexo masculino y mayor de edad, el nombre de la persona */

#include<stdio.h>

int main()
{
	int edad;
	char sexo,nombre[15],apellido[15];

	printf("\n\n Hola! revisaremos algunos de tus datos\n\n");

	printf("Escribe tu nombre: ");
	fgets(nombre,15,stdin);
//	scanf("%s",&nombre);

	printf("Escribe tu apellido: ");
	fgets(apellido,15,stdin);
//	scanf("%s",&apellido);

	printf("Introduce la primera inicial de tu sexo, 'M' o 'F': ");
	scanf("%c",&sexo);

	printf("Introduce tu edad: ");
	scanf("%i",&edad);

	if((strcmp(sexo,"m")==0)&&(edad>=18))
	{
		printf("\n\nQue tal %s, puedes seguir adelante",nombre);
	}
	else
	{
		printf("\n\n Sr. %s no cumple el requisito previo de ser mayor de edad y hombre",apellido);
	}


	return 0;
}