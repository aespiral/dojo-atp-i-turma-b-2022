#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct{
    char str[50];
} PARTICIPANTE;

int main(){
    // Abre arquivo turma.txt ou alternativo fornecido pelo usuário ou termina
    char arquivo[100];
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

    // Copia nomes dos alunos
    PARTICIPANTE* alunos = (PARTICIPANTE*) malloc( quant * sizeof(PARTICIPANTE) );
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    /*    while((ch = fgetc(fp))!= EOF){
        if(ch == '\n')
            quant++;
    }*/
    while ((read = getline(&line, &len, fp)) != -1) {
        printf("Retrieved line of length %zu :\n", read);
        printf("%s", line);
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
 
        printf("%d\n", sorteados[i]);
        printf("Digite ENTER para o próximo");
        ch=getchar();
        
    }

}