#include <stdio.h>
int main(){
	
	int n;
	printf("nhap so nguyen n = ");
	scanf("%d",&n);
	
	if(n>0){
		float s=0, i=1;
		while(i<n){
			s+=1/i;
			i++;
		}
		printf("tong la: %f",s);
	}else{
		printf("Error");
	}
}
