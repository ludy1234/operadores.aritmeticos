#include <stdio.h>

main(){

    //O custo de um carro novo ao consumidor é a soma do custo de fábrica com aporcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor

    float custoFabrica, custoConsumidor;
    const float percentualDistribuidor = 0.28;
    const float percentualImpostos = 0.45;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

    printf("O custo final ao consumidor e R$ %.2f/n", custoConsumidor);

    return 0;
    
}