#include<stdio.h>
int main() {
	int fila1,columna1,fila2,columna2,u;
	printf("Introduzca la fila y columna de la primera ficha: \n");
	scanf("%d %d",&fila1,&columna1);
	printf("Introduzca la fila y columna de la segunda ficha: \n");
	scanf("%d %d",&fila2,&columna2);
	
	u=0;
	if (fila1==fila2){
		printf("\n Estan en la misma fila \n");
		u=1;
	}
	if(columna1==columna2){
		printf("\n Estan en la misma columna \n");
		u=1;
	}
	if(((fila1+1==fila2) || (fila2+1==fila1)) && ((columna1+1==columna2) || (columna2+1==columna1))) {
		printf("\n Estan en la misma diagonal \n");
		u=1;
	}
	if(u==0) {
		printf("\n No tienen relacion \n");
	}
	
	
	
}
