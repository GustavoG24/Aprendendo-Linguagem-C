//Projeto 001 - modo 01
#include <stdio.h>

int main(){
    // variavel do tipo char
    char nome;

    // mostrar mensagem na tela
    printf("Qual o seu nome: ");

    // coletar dados
    scanf("%s", &nome);

    // exibir resultado
    printf("Meu nome e %s.", nome);

    printf("\n\n");
    return 0;
}