#include<stdio.h>
int main(){
	
	int day, month, year;
	printf("moi ban nhap ngay ");
	scanf("%d", &day);
	printf("moi ban nhap thang ");
	scanf("%d", &month);
	printf("moi ban nhap nam ");
	scanf("%d", &year);
	if(day<0 || day>31 || day!=0){
		printf("khong hop le");
	}else if(month<0 || month>12 || month!=0){
		printf("khong hop le");
	}else if(year<0 || year!=0){
		printf("khong hop le");
	}else{
		printf("ngay %d thang %d nam %d", day, month, year);
	}
	
	return 0;
	
}
