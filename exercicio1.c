#include <stdio.h>

main(){

    //Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.

    int num1, num2, soma, multi, sub;
    float div;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;
    multi = num1 * num2;
    sub = num1 - num2;
    div = (float)num1/(float)num2;

    printf("Soma: %d, /nMultiplicacao: %d, /nSubtracao: %d, /nDivisao: %.2f", soma, multi, sub, div);

    return 0;
}