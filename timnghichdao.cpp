#include <stdio.h>

int main(){
	int a;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&a);
	
	int snd = 0;
	int du = 0;

	if(a>0&&a<10000){
		du =a%10;
		snd = snd*10 + du;
		a = a/10;

			if(a>0){
				du =a%10;
				snd = snd*10 + du;
				a = a/10;

					if(a>0){
						du =a%10;
						snd = snd*10 + du;
						a = a/10;

							if(a>0){
								du =a%10;
								snd = snd*10 + du;
								a = a/10;

							}else{
								printf("So nghich dao la: %d",snd);
							}
					}else{
						printf("So nghich dao la: %d",snd);
					}
			}else{
				printf("So nghich dao la: %d",snd);
			}
	}else{
		printf("Nhap sai");
	}	

}
