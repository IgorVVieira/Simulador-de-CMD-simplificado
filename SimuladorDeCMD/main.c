#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "comandos.h"

void imprimiCMD(){
    printf(">");
}
//Função principal que irá rodar até receber como entrada "sair"
int main(void) {
    char nome[51];

    printf("*Desenvolvido e mantido por: Igor Vitor Vieira.*\n");
    printf("*Simulador de CMD que responde comando em Portugues v0.8*\n");
    printf("Digite 'comandos' para ver os comandos suportados ou 'sair' para fechar o programa.\n");
    
    do {
        imprimiCMD();
        fflush(stdin);
        gets(nome);
    if (strcmp(nome, "comandos") == 0 ){
        comandosSuportados(nome);
    }
    verificaComando(nome);
    } while(strcmp(nome, "sair") != 0 );

    printf("Voce escolheu fechar o simulador de CMD!\n");

    return 0;
}
