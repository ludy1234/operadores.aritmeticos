#include <stdio.h>

main(){

//Dadas as medidas de uma sala, informe sua área.

    float comprimento, largura;

    printf("Digite o comprimento da sala: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da sala: ");
    scanf("%f", &largura);

    float area = comprimento * largura;
    printf("A area da sala e %.2f metros quadrados./n", area);

    return 0;

}