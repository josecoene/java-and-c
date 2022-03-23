#include <stdio.h>

int main() {

    int numMatricula;
    int numHoras, numFilhos;
    int salarioPorHora, porcentagemSalario, salarioFinal;

    printf("Digite seu numero de matricula: ");
    scanf("%d", &numMatricula);

    printf("\nDigite o numero de horas trabalhadas: ");
    scanf("%d", &numHoras);

    printf("\nDigite quantos filhos voce tem:");
    scanf("%d", &numFilhos);

    printf("\nDigite o seu salario por hora: ");
    scanf("%d", &salarioPorHora);

    salarioPorHora == salarioPorHora * numHoras;
    porcentagemSalario == salarioPorHora * numFilhos * 10/100;
    salarioFinal == salarioPorHora + porcentagemSalario;

    printf("Salario Final: %d", salarioFinal);

    return 0;

}