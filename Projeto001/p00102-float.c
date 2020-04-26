// Projeto 001 modo 02
/*
Esse modo mostra uma quantidade padrão e definitiva de casas decimais para o modo float, de acordo com a formatação.
=> "%.3f":se refere ao tipo float com 3 casas decimais. Ex: 12.405, 1.999
*/
#include <stdio.h>

int main(){

    float num;
    num = 3,145948599785;

    printf("Segue os resultados abaixo com quantidades determinadas de casas decimais para o valor 3.145948599785:\n");

    printf("Com 06 casa decimal: %f\n", num);
    printf("Com 05 casa decimal: %.5f\n", num);
    printf("Com 04 casa decimal: %.4f\n", num);
    printf("Com 03 casa decimal: %.3f\n", num);
    printf("Com 02 casa decimal: %.2f\n", num);
    printf("Com 01 casa decimal: %.1f\n", num);
    printf("Com 00 casa decimal: %.0f\n", num);
    

    printf("\n");
    return 0;
}