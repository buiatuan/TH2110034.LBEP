#include <stdio.h>
#include <string.h>

int main(){
	char str[20];
	printf("input string: ");
	scanf("%s",str);
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(65<=str[i] && str[i]<=122){
			count++;
		}			
	}
	int x= strlen(str)-count;
	printf("tong nguyen am trong string la: %d\n",count);
	printf("tong cac ky tu khac la: %d\n",x);
}
