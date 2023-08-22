#include <stdio.h>

main(){
    //Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

    int anos, meses, dias, idadeEmDias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);
    
    idadeEmDias = (anos * 365) + (meses * 30) + dias;

    printf("A idade em dias e %d/n", idadeEmDias);

    return 0;
}