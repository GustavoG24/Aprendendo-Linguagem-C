// Projeto 001 modo 03
/*
Esse modo mostra uma quantidade padrão e definitiva de casas decimais para o modo double, de acordo com a formatação.
=> "%.13f":se refere ao tipo float com 13 casas decimais. Ex: 12.8745301589015, 1.9990023513987
*/

#include <stdio.h>

int nain(){

    double num;
    num = 3,1459485997850025874;

    printf("Segue os resultados abaixo com quantidades determinada \nquantidade de casas decimais para o valor 3.1459485997850025874:\n");

    printf("Padrão de casas decimais: %f\n", num);
    printf("Com 10 casas decimais ..: %.10f\n", num);
    printf("Com 07 casas decimais ..: %.7f\n", num);
    printf("Com 04 casas decimais ..: %.4f\n", num);
    printf("Com 02 casas decimais ..: %.2f\n", num);
    printf("Com 01 casa decimal ....: %.1f\n", num);
    printf("Com 00 casa decimal ....: %.0f\n", num);


    printf("\n");
    return 0;
}