#include<stdio.h>
int main() {
	int num,i;
	num=0;
	for (i=1;i<=20;i+2) {
		if ((i%2)!=0) {
			num=num+i;
		}
	}
	
	printf("%d",num);
	
}
