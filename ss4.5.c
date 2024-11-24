#include<stdio.h>
int main(){
	
	int a, b, c;
	printf("moi ban nhap vao so nguyen a \n");
	scanf("%d", &a);
	printf("moi ban nhap vao so nguyen b \n");
	scanf("%d", &b);
	printf("moi ban nhap vao so nguyen c \n");
	scanf("%d", &c);
	if((c>a && c<b)||(c>b && c<a)){
		printf("%d nam giua %d va %d", c, a, b);
	}else{
		printf("%d khong nam giua %d va %d", c, a, b);
	}
	
	return 0;
	
}
