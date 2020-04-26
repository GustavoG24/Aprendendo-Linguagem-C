// Projeto 001 modo 03
/*
Esse modo mostra uma quantidade definitiva de casas decimais para o modo float, de acordo com a formatação.
=> "%.3f":se refere ao tipo float com 3 casas decimais. Ex: 12.405, 1.999
*/
#include <stdio.h>

int main(){

    float num1, num2, res;

    printf("Digite um valor decimal: ");
    scanf("%f", &num1);

    printf("Digite outro valor: ");
    scanf("%f", &num2);

    res = num1 / num2;

    printf("Segue os resultados abaixo com quantidades determinadas de casas decimais:\n");

    printf("Com 01 casa decimal: %.1f\n", res);
    printf("Com 02 casa decimal: %.2f\n", res);
    printf("Com 03 casa decimal: %.3f\n", res);
    printf("Com 04 casa decimal: %.4f\n", res);
    printf("Com 05 casa decimal: %.5f\n", res);
    printf("Com 06 casa decimal: %f\n", res);

    printf("\n");
    return 0;
}