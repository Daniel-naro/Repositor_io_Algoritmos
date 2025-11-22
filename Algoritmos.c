#include <stdio.h>
    float media(float notas[3]) {
        return (notas[0] + notas[1] + notas[2]) / 3;
    }

float menor(float notas[3]) {
    float menor = notas[0];
    for (int i = 1; i < 3; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

float maior(float notas[3]) {
    float maior = notas[0];
    for (int i = 1; i < 3; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

void inserir_notas(float notas[3]) {
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}



int main() {
    
    
    float notas[3];
    int acesso = 1;
    int i;
    int menu=0;

while (acesso == 1)
{ 
    printf("DIGITE 0 PARA SAIR, E 1 PARA CONTINUAR: \n");
    scanf("%d", &acesso);
    if (acesso == 0) {
        break;
    }   


    while (menu < 5)
    {

    
    printf("Escolha uma opcao:\n");
    printf("0 - Colocar notas\n");
    printf("1 - Media\n");
    printf("2 - Menor nota\n");
    printf("3 - Maior nota\n");
    printf("4 - Ver Notas\n");
    printf("5 - Sair\n");
    scanf("%d", &menu);
switch (menu) {
    case 0:
        inserir_notas(notas);
        break;
    case 1:
        printf("Media: %.2f\n", media(notas));
        break;
    case 2:
        printf("Menor nota: %.2f\n", menor(notas));
        break;
    case 3:
        printf("Maior nota: %.2f\n", maior(notas)); 
        break;
    case 4:
        printf("Notas inseridas: %.2f, %.2f, %.2f\n",notas[0], notas[1], notas[2]);
        break;
    case 5:
        printf("FECHANDO PROGRAMA.\n");
        break;
    default:

    }   
    
}
}
    return 0;
}