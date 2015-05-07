#include<stdio.h>
int main() {
	int ano;
	scanf("%d",&ano);
	if (ano%4==0) {
		if (ano%100==0) {
			if ( ano%400==0) {
				printf("Es bisiesto");
			}
			else{
				printf("No es bisiesto");
			}
		}
		else {
			printf("Es bisiesto");
		}
		
	}
	else {
		printf("No es bisiesto");
	}
	
	
	
	
}
