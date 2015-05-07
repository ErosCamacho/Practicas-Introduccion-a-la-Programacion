#include<stdio.h>
int main() {
float lado1,lado2,lado3;
scanf("%f",&lado1);
scanf("%f",&lado2);
scanf("%f",&lado3);
	if ((lado1==lado2) && (lado2==lado3)){
		printf("El triangulo es equilatero");
	}
	else {
		printf("El triangulo NO es equilatero");
	}
}

