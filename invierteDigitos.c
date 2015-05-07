#include<stdio.h>
#include<math.h>
int main() {
	int numin,numfin,num,dimen,marcador,var;
	printf("Introduzca su numero \n");
	scanf("%d",&numin);
	marcador=1;
	dimen=0;
	num=1;
	while (num>0){
		num=numin/marcador;
		marcador=marcador*10;
		dimen=dimen+1;
	}
	dimen=dimen-1;
	numfin=0;
	for (num=dimen-1;num>=0;num--){
		marcador=numin/(pow(10,num));
		printf("marcador: %d\n",marcador);
		numin=numin-(marcador*pow(10,num));
		printf("numin: %d\n",numin);
		numfin=numfin+marcador*pow(10,(dimen-1-num));
	}
	printf("\n %d",numfin);
	
	
	
}
