# include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "comandos.h"

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

    else if(strcmp(palavra, "propriedades do sistema") == 0){
    	system("systeminfo");
    	printf("\n");
	}
	else if(strcmp(palavra, "versao windows") == 0){
		system("ver");
		printf("\n");
	}
	else if(strcmp(palavra, "criar arquivo") == 0){
        criaArquivo();
	}
    else{
        printf("Comando %s nao encontrado...\n",palavra);
        printf("\n");
    }
}

//Lista todos comandos suportados
void comandosSuportados(char palavra[51]){
    printf("-limpar\n-juda\nip\n-desligar agora\n-arvore\n-diretorios\n-versao java\n-abrir cmd\n-propriedades do sistema\n-versao windows\n-criar arquivo");
    printf("\n");
}

void criaArquivo(){
    FILE *file = fopen("Arquivo.txt","wr");
     fclose(file);
    printf("Arquivo vazio criado com sucesso!\n");
}

