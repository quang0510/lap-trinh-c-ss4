#include<stdio.h>
int main(){
	
    float soDien, dauThang,cuoiThang ;
	printf(" nhap so dien dau thang ");
	scanf("%f", &dauThang);
	printf(" nhap so dien cuoi thang ");
	scanf("%f", &cuoiThang);
	soDien = cuoiThang - dauThang;
	
	if(0 <= soDien < 50){
	  printf("so tien dien ban phai tra là %.f", soDien*10000);
	} else if(50 <= soDien < 100){
	  printf("so tien dien ban phai tra là %.f", soDien*15000);
	} else if(100 <= soDien < 150){
	  printf("so tien dien ban phai tra là %.f", soDien*20000);
	} else if(150 <= soDien < 200){
	  printf("so tien dien ban phai tra là %.f", soDien*25000);
	} else if(200 <= soDien){
	  printf("so tien dien ban phai tra là %.f", soDien*30000);
	}
	
	return 0;
	
}
	
    
