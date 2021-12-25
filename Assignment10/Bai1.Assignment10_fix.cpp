#include <stdio.h>
#include <string.h>

int main(){
	char str[20];
	printf("input string: ");
	scanf("%s",str);
	int a=0, e=0, o=0, i=0, u=0;
	for(int j=0;j<strlen(str);j++){
		switch(str[j]){
			case 'a': a++; break;
			case 'e': e++; break;
			case 'o': o++; break;
			case 'i': i++; break;
			case 'u': u++; break;
			default:; break;
		}			
	}
	int x= strlen(str)-a-e-o-i-u;
	printf("Vowel a appears: %d\n",a);
	printf("Vowel e appears: %d\n",e);
	printf("Vowel o appears: %d\n",o);
	printf("Vowel i appears: %d\n",i);
	printf("Vowel u appears: %d\n",u);
	printf("Sum of other characters: %d\n",x);
}
