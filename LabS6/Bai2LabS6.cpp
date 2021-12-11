#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap n= ");
		scanf("%d",&n);
	}while(n<0);
	
	if(n==0){
		printf("%d! la: 1",n);
	}else{
		int i=1, s=1;
		for(i=1;i<=n;i++){
			s=s*i;
		}
		printf("%d! la: %d",n,s);
	}
	
}
