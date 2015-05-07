#include<stdio.h>
int main() {
	int dn,mn,an,da,ma,aa ;
	printf("\n Introduzca la fecha de nacimiento \n");
	scanf("%d %d %d",&dn,&mn,&an);
	printf("\n Introduzca la fecha actual\n");
	scanf("%d %d %d",&da,&ma,&aa);
	
	printf("\n Su tiempo de vida es de: \n");
	dn=dia(dn,da);
	printf("\n Dias \n %d",dn);
	dn=mes(mn,ma);
	printf("\n Meses \n %d",dn);
	dn=ano(dn,mn,an,da,ma,aa);
	printf("\n Anos\n %d",dn);
	

}


int dia(int num1,int num2){
		int dif;
		if (num1>num2){
		dif=num1-num2;
		}
		else if (num2>num1){
		dif=num2-num1;
		}
		else {
			dif=0;
		}
		return(dif);
	}
int mes(int num1,int num2){
		int dif;
		if (num1>num2){
		dif=12-num1+num2;
		}
		else if (num1<num2){
		dif=num2-num1;
		}
		else {
			dif=0;
		}
		return(dif);
}

int ano(int num1,int num2,int num3, int num4,int num5,int num6) {
	int dif;
	if (num5>num2) {
		dif=num6-num3;
	}
	else if(num2>num5){
		dif=num6-num3-1;
	}
	else if(num2==num5){
		if (num4>num1) {
		dif=num6-num3;
		}
		else if(num1>num4){
		dif=num6-num3-1;
		}	
	}
	return(dif);
	
}
	
