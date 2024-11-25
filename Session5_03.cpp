#include<stdio.h>

int main(){
	int n;
	printf("Nhap mot so nguyen duong: ");
	scanf("%d",&n);
	
	int sum=0;
	for(int i=1; i<=n; i++ ){
		sum += i;
	}
	printf("%d", sum);
	return 0;
}