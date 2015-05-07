#include<stdio.h>
int main() {
	int limit;
	float pi;
	float numpar,numimpar,i;
	limit=20;
	numpar=1;
	numimpar=1;
	for (i=2;i<=limit;i=i+2){
		numpar=numpar*i*i;
	
	}
	for (i=1;i<=limit+1;i=i+2){
		if (i==limit+1) {
		numimpar=numimpar*i;
		}
		else {
		numimpar=numimpar*i*i;
		}
	}	
	printf("%f \n",numpar);
	printf("%f \n",numimpar);
	pi=2*(numpar/numimpar);
	printf("%f",pi);
}
