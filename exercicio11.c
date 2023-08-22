#include <stdio.h>

main(){

    //Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.

    int numeroCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numeroCarrosVendidos);

    printf("Digite o  valor total de vendas: ");
    scanf("%d", &valorTotalVendas);
    
    printf("Digite o salario fixo: ");
    scanf("%d", &salarioFixo);
    
    printf("Digite o valor por carro vendido: ");
    scanf("%d", &valorPorCarro);

    salarioFinal = salarioFixo + (valorPorCarro * numeroCarrosVendidos) + (0.05 * valorTotalVendas);

    printf("O salario final do vendedor e R$ %.2f/n", salarioFinal);

    return 0;

}