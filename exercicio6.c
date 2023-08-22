#include <stdio.h>

main(){

    // Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

    float custo, frete, despesas, venda;
    float lucro, percentualLucro;

    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);

    printf("Digite o valor do frete: ");
    scanf("%f", &frete);
    
    printf("Digite as despesas eventuais: ");
    scanf("%f", &despesas);
    
    printf("Digite o valor de venda: ");
    scanf("%f", &venda);
    
    lucro = venda - (custo + frete + despesas);
    percentualLucro = (lucro / (custo + frete + despesas)) * 100;

    printf("Lucro: R$ %.2f/n", lucro);
    printf("percentual de lucro: R$ %.2f%%/n", percentualLucro);

    return 0;
}