#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<3);
	
	int a1=1, a2=1, a3, i;
	
	for(i=3;i<=n;i++){
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
	printf("so thu %d trong day fibonacci la %d",n,a3);
}
