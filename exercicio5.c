#include <stdio.h>

main(){

 //Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

    float valorEmReais, cotacaoDolar;

    printf("Digite o valor em reais: ");
    scanf("%f",&valorEmReais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    float valorEmDolares = valorEmReais / cotacaoDolar;
    printf("O valor em dolares e %.2f./n", valorEmDolares);

    return 0;
}