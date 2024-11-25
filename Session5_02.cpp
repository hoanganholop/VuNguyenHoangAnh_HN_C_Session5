#include<stdio.h>

int main(){
	int n;
	while(1){
		printf("Nhap so nguyen n: ");
		scanf("%d",&n);
		if(n==10){
			goto end;
		}else{
			printf("Nhap lai:\n");
		}
	}
	end:
		return 0;
}