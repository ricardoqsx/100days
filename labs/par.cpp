//Escribia un Programa en c que determine si el numero es par o impar e imprima cuantos fueron pares, supongamos que son 10
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main (void)

{
	int a; i; contpar; contimpar;
	contpar=0; 
	contimpar=0;
	for(i=1;i<=5;i=i++)
	{
		cout<<"ingrese el valor numerico:";
		cin>>a;
		if(a%2==0)
	
		cout<<"el numero es par:";
		contpar++;
	else
	
		cout<<"El numero es Impar:";
		contimpar++;
	}
	cout<<"\n\n"<<"Se ingresaron"<< contpar<<"numeros pares";
	cout<<"Se ingresaron"<< contimpar<<"numeros impares";
	
	return 0;
}