#include <stdio.h>

int main () {

    //Programa para: classificar a idade informada pelo usuário em criança (Até 12 anos), 
   // adolescente (De 13 a 19 anos) ou adulto (Acima de 19 anos).

    int idade;

    printf("Defina sua idade: \n");
    scanf("%i", &idade);

    if (idade<12)
    {
        printf("Idade classificada como Criança.");
    } 

    if (idade>12&&idade<19)
    {
        printf("Idade classificada como Adolescente.");
    } 

    if (idade>19)
    {
        printf("Idade classificada como Adulto.");
    }

    else {
        printf("Caractere não identificado.");
    }
}