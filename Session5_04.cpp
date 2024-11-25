#include<stdio.h>

int main(){
	int n;
	printf("Nhap mot so tu 1-10: ");
	scanf("%d",&n);
	
	if(n<1||n>10){
		printf("Nhap sai");
	return 1;
    }
	for(int i=1;i<=10;i++){
		printf("%d * %d = %d\n", n, i, n*i);
	}
	return 0;
}