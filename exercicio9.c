#include <stdio.h>

main(){

    //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
    
    float salarioAtual, percentualReajuste, novoSalario;

    printf("Digite o salario mensal atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    printf("O novo salario e R$ %.2f/n", novoSalario);

    return 0;
    
}