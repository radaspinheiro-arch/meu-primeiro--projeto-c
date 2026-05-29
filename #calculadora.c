#include <stdio.h>

int main() {
    /*
    Soma (+)
    Subtracao (-)
    Multiplicacao (*)
    Divisao (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    // Entrada de dados
    printf("entre com numero 1: \n");
    scanf("%d", &numero1);

    printf("entre com o numero 2: \n");
    scanf("%d", &numero2);

    // Processamento (Cálculos)
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    // Exibição dos resultados
    printf("A soma e: %d\n", soma);
    printf("A subtracao e: %d\n", subtracao);
    printf("A multiplicacao e: %d\n", multiplicacao);
    printf("A divisao e: %d\n", divisao);

    return 0;
}





