#include <stdio.h>
#define PI 3.14159

main(){

    //Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 

    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * area * raio;

    printf("A area do circulo e %.2f/n", area);

    return 0;

}