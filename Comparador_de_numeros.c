#include <stdio.h>

int main (){
    //programa para comparar dois valores e informal qual é o maior, ou se são iguais.

    int num1, num2;
    printf("Comparador de numeros: \n");
    printf("Digite o primeiro numero: \n");
    scanf("%i", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%i", &num2);


    if (num1>num2)
    {
        printf("%i é maior que %i", num1, num2);
        return 0;
    }
    
    if (num2>num1)
    {
        printf("%i é maior que %i", num2, num1);
        return 0;
    
    }
    
    if (num1=num2)
    {
        printf("%i e igual a %i", num1, num2);
        return 0;
    
    }
    else {
        printf("numeros não identificados.");
        return 0;
    }

}