
/* Fórmulas de conversión de grados Fahrenheit

Conversión de a Fórmula

Fahrenheit

Celsius

°C = (°F − 32) / 1.8

Celsius

Fahrenheit

°F = °C · 1.8 + 32

Fahrenheit

kelvin

K = (°F + 459.67) / 1.8

kelvin

Fahrenheit

°F = K · 1.8 − 459.67

Fahrenheit

Rankine

°Ra = °F + 459.67

Rankine

Fahrenheit

°F = °Ra − 459.67

Fahrenheit

Réaumur

°Ré = (°F − 32) / 2.25

Réaumur

Fahrenheit

°F = °Ré · 2.25 + 32

*/

#include<stdio.h>
#include<stdlib.h>
#define bv "\n\n Bienvenido, este programa te calculara grados celsius a Farenheit\n\n"

int main()
{
	float c,f;
	printf(bv);

	printf("Introduzca los grados Celsius: ");
	scanf("%f",&c);

	f=(c*1.8)+32;

	printf("\n\nGracias, %.2f grados celsius equivalen a %.2f grados farenheit\n\n",c,f);


return 0;
}
