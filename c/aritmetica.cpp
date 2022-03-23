#include <stdio.h>

int main() {

    int nota1, peso1;
    int nota2, peso2
    int nota3, peso3;
    int mediaFinal;
    
    printf("Digite a primeira nota e peso: ");
    scanf("%d %d", &nota1, &peso1);

    printf("\nDigite a segunda nota e peso: ");
    scanf("%d %d", &nota2, &peso2);

    printf("\nDigite a terceira nota e peso: ");
    scanf("%d %d", &nota3, &peso3);

    mediaFinal = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("\n\nA media aritmetica e: %d", mediaFinal);

    return 0;

}