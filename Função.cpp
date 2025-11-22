#include <stdio.h>
/*	void verificarParImpar(int numero) {
		if (numero % 2==0) {
			printf("%d e par.\n", numero);
		}
		else{
			printf("%d e impar.\n", numero);
		}
		
	}
	
	int main() {
		int num=0, i;
		
		for (i=0; i<10; i++){
			
		scanf("%i", &num);
		verificarParImpar(num);
		}
}
		
		
*/

int quadrado(int numero){
	return numero*numero;
}

int main (){
	int x=5;
	int resultado=quadrado(x);
	printf("O quadrado de %d e %d\n", x, resultado);
	return 0;
}
