//Projeto 001 - modo 04
/*
Este modo mostra algumas diferenças para o tipo char.
1. para apenas um único caractere, usa a formatação %c
2. para 2 ou mais caracteres, usa a formatação %s
 %s: é uma formatação para string / cadeia de caracteres
3. No caso de inserir textos, principalmente no mode de entrada, algumas medidas devem ser tomadas e incluída 
ao seu código fonte para que tenha êxito no resultado. Mais detalhes serão abordados futuramente em outros projetos.
*/
#include <stdio.h>

int main(){
    // variavel do tipo char
    char letra = 'A';
    char palavra = "casa";
    char texto = {"Dia da Independência"};

    printf("Um único caractere ..............: %c\n", letra);
    printf("Dois oi mais caracteres .........: %s\n", palavra);
    printf("Para o texto Dia da Independência: %s\n", texto);

    printf("\n");
    return 0;
}