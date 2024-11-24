#include<stdio.h>
int main(){
	
	float a, b, c;
	printf("Moi ban nhap a ");
	scanf("%f", &a);
	printf("Moi ban nhap b ");
	scanf("%f", &b);
	printf("Moi ban nhap c ");
	scanf("%f", &c);
	if((a == b) &&(a == c) && (b == c)){
		printf("day la tam giac deu ");
	}else if(a == 0 || b ==0  || c == 0 ){
		printf("ba canh a,b,c khong the tao thanh tam giac");
	}else if(a==b || b==c ||c==a){
		printf(" day la tam giac can");
	}else if(a*a + b*b==c*c||b*b + c*c==a*a||a*a + c*c==b*b){
		printf("day la tam giac vuong");
	}else{
		printf("day la tam giac");
	}
   
	return 0;
}
