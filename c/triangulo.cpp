#include <stdio.h>
#include <math.h>

int main()
{
    double lado1, lado2, lado3, perimetro, semip, area;

    // printf("Entre com os valores dos lados do triângulo: \n");

    scanf("%lf", &lado1);
    scanf("%lf", &lado2);
    scanf("%lf", &lado3);

    perimetro = lado1 + lado2 + lado3;
    semip = perimetro/2;
    area = sqrt(semip*(semip-lado1)*(semip-lado2)*(semip-lado3));

    printf("Lados = %5.2f, %5.2f, %5.2f\n", lado1, lado2, lado3);
    printf("Perímetro = %5.2f\n", perimetro);
    printf("Área = %5.2f\n", area);

    return 0;

}