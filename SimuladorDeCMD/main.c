#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimiCMD(){
    printf(">");
}

//Procedimento que recebe uma string como entrada e a compara com os comandos suportados
void verificaComando(char palavra[51]){
    if (strcmp (palavra, "limpar") == 0){
        system("cls");
    }

    else if(strcmp(palavra, "ajuda") == 0){
        system("help");
        printf("\n");
    }

    else if(strcmp(palavra, "ip") == 0){
        system("ipconfig");
        printf("\n");
    }

    else if(strcmp(palavra, "desligar agora") == 0){
        system("shutdown now");
        printf("\n");
    }

    else if(strcmp(palavra, "arvore") == 0){
        system("tree");
        printf("\n");
    }
    else if(strcmp(palavra, "diretorios") == 0){
        system("dir");
        printf("\n");
    }

    else if(strcmp(palavra, "versao java") == 0){
        system("java -version");
        printf("\n");
    }

    else if(strcmp(palavra, "abrir cmd") == 0){
        system("start");
        printf("\n");
    }

    else{
        printf("Comando %s nao encontrado...\n",palavra);
        printf("\n");
    }
}

//Lista todos comandos "suportados"
void comandosSuportados(char palavra[51]){
    printf("limpar\najuda\nip\ndesligar agora\narvore\ndiretorios\nversao java\nabrir cmd\n");
    printf("\n");
}

//Função principal que irá rodar até receber como entrada "sair"
int main(void){
    char nome[51];
    printf("Simulador de CMD que responde comando em Portugues v0.1\n");
    printf("Digite 'comandos' para ver os comandos suportados.\n");
    do{
    imprimiCMD();
    fflush(stdin);
    gets(nome);
    if(strcmp(nome, "comandos") ==0 ){
        comandosSuportados(nome);
    }
    verificaComando(nome);
    }while(strcmp(nome, "sair") != 0 );
    goto fim;
    fim:
        printf("Voce escolheu fechar o simulador de CMD!\n");
    return 0;
}
