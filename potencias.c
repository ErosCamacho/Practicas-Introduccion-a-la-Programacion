#include<stdio.h>
#include<math.h>
int main() {
	int tope,base,num,i;
	printf("Introducir el valor maximo \n");
	scanf("%d",&tope);
	printf("\n Introducir la base \n");
	scanf("%d",&base);
	
	i=1;
	while (pow(base,i)<=tope) {
		num=pow(base,i);
		printf("%d \n",num);
		i=i+1;
	}	
	
	
	
}
