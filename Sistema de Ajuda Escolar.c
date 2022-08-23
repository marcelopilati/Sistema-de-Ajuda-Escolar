#include <stdio.h>
void main(){

    float a, b, c, delta, base, altura, area;
    int calculo;

    printf("Sistema de Ajuda Escolar\n\n");

    printf("Escolha qual calculo deseja fazer:\n\n ");
    printf("1 - Area do Triangulo\n\n");
    printf("2 - Calculo do Delta atraves da Formula de Bhaskara\n\n");
    scanf("%d", &calculo);

    switch(calculo){
        case 1:

            printf("Insira o valor da base: ");
            scanf("%f", &base);

            printf("Insira o valor da altura: ");
            scanf("%f", &altura);

            if(base > 0 && altura > 0){
                area = base * altura;
                printf("A Area do Triangulo e: %f\n", area);
                }
            else
                printf("A base e a altura devem ser maiores que 0\n");
        break;

        case 2:

            printf("Insira o valor de a: ");
            scanf("%f", &a);
            printf("Insira o valor de b: ");
            scanf("%f", &b);
            printf("Insira o valor de c: ");
            scanf("%f", &c);

            delta = (b * b) - (4 * a * c);

            printf("O Valor de Delta e: %f\n", delta);
        break;

        default:
            printf("Opcao Invalida\n\n");
            }
    }
