#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main() {

    /*
     * 1 Informar quantos números foram digitados
     * 2 Somar os números
     * 3 Definir o máximo valor encontrado
     * 4 Buscar um número ímpar
     * 5 Mais de uma informação por iteração
     *     Qual o número real associado ao mínimo valor do inteiro
     */
    int a;
    float b;
    unsigned int contador = 0;
    int soma = 0;
    int max = -100;    // max = INT_MIN
    bool existe_impar = false;
    int a_min = 100;
    float b_min;

    printf("Digite um numero entre -100 e 100 (fora disso encerra) e digite um número real: ");
    scanf("%d %f", &a, &b);
    while(a >= -100 && a <= 100) {
        contador = contador + 1;
        soma = soma + a;
        if (a > max) {
            max = a;
        }
        if (a % 2 == 1){
            existe_impar = true;
        }
        if (a < a_min) {
            a_min = a;
            b_min = b;
        }

        printf("Digite um numero entre -100 e 100 (fora disso encerra) e digite um número real: ");
        scanf("%d %f", &a, &b);
    };

    printf("Quantidade de dados fornecidos: %d\n", contador);
    printf("Totalização dos números: %d\n", soma);
    printf("A média inteira é: %d\n", soma/contador);
    printf("A média com fração é: %f\n", 1.0*soma / contador);
    printf("O maior número digitado é: %d\n", max);
    if (existe_impar) {
        printf("Um número ímpar foi digitado.\n");
    } else {
        printf("Não houve números ímpares\n");
    }
    printf("O valor real associado ao mínimo inteiro é: %f\n", b_min);
    
}