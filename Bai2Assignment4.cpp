#include <stdio.h>
int main(){
	
	int s=0, count=1;
	
	while(count<100){
		s+=count;
		count+=2;
	}
	printf("tong so le nho hon 100 la: %d",s);
}
