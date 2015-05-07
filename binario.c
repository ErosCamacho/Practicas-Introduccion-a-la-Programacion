#include<stdio.h>

int main() {
	int u;
	float num;
	num=0.02;
	u=1;
	while (num!=1 && u<10) {
		num=num*2;
		if (num<1 && num>0) {
			printf("0 \n");
		}	
		else if (num>=1) {
			printf("1 \n");
			num=num-1;
		}
		
	u=u+1;	
		
	}
	
	
	
}
