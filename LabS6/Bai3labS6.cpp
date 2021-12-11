#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int a=n;
	int du=0, snd=0;
	if(n>=0){
		for(;n>0;n=n/10){
			du=n%10;
			snd=snd*10+du;
		}
		printf("So ngich dao cua %d la: %d",a,snd);
	}else{
		int b=-n;
		for(;b>0;b=b/10){
			du=b%10;
			snd=snd*10+du;	
		}
		printf("So ngich dao cua %d la: -%d",a,snd);
	}
	
	
}
