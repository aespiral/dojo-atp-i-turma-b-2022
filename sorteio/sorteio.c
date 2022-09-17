#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct{
    char nome[64];
    bool presente;
    short int rodada;
} PARTICIPANTE;

int main(){
    // Abre arquivo turma.txt ou alternativo fornecido pelo usuário ou termina
    char arquivo[256];
    strcpy(arquivo, "turma.txt");
    FILE* fp = fopen(arquivo, "r+");
    while (fp == NULL) {
        printf("Arquivo '%s' não encontrado.\nDigite outro nome de arquivo ou 'sair': ", arquivo);
        scanf("%s", arquivo);
        if (strcmp(arquivo, "sair")==0)
            exit(0);
        fp = fopen(arquivo, "r+");
    }

    // Conta número de participantes
    int quant = 0;
    char ch;
    while((ch = fgetc(fp))!= EOF){
        if(ch == '\n')
            quant++;
    }

    // Copia nomes dos participantes
    PARTICIPANTE* parts = (PARTICIPANTE*) malloc( quant * sizeof(PARTICIPANTE) );
    fseek(fp, 0, SEEK_SET); // Reposiciona o cursor início do arquivo
    #define PAROU 0
    #define ESP_BLK_EOF 1
    int est = ESP_BLK_EOF;
    int vez = 0;
    int k = 0;
    while (est != PAROU) {
        switch (est) {
            case ESP_BLK_EOF:
                ch = fgetc(fp);
                if (ch == '\n') {
                    parts[vez].nome[k] = '\0';
                    vez++;
                    k=0;
                } else if (ch == EOF) {
                    parts[vez].nome[k] = '\0';
                    est = PAROU;
                } else {
                    parts[vez].nome[k] = ch;
                    k++;
                }
        }
    }

    // SORTEIO
    int num, i, j;
    bool achou;
    int* sorteados = (int*)malloc(quant*sizeof(int));

    srand(time(NULL));

    for(i = 0; i < quant; i++){
        num = rand() % quant;
        achou=false;
        for(j=0; j<i; j++){
            if(num==sorteados[j]){
                achou=true;
            }
        }

        if(achou){
            i--;
            continue;
        }
        sorteados[i]=num;
 
        printf("%s\n", parts[num].nome);
        printf("Digite ENTER para o próximo");
        ch=getchar();
        
    }

}