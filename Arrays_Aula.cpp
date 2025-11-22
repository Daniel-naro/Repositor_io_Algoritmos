#include<stdio.h>

int main(){
	
	 int num[10];
	 int i, b;
	 for(i=0; i<5; i++){
	 	printf ("Digite um numero: ");
	 	scanf("%i", &num[i]);
	 }
	 
		printf("selecione um numero: ");
		scanf("%i", &b);
		printf(" %i", num[b]);
	
}
