#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct{
    char str[50];
}NOME;


int main(){
    srand(time(NULL));
    int num, i, j;
    bool achou;
    char ch;
    int quant;

    FILE* fp = fopen("alunos.txt", "r");
    quant = 0;
    while((ch = fgetc(fp))!= EOF){
        if(ch == '\n')
            quant++;
    }

    int* sorteados = (int*)malloc(quant*sizeof(int));

    NOME*alunos = (NOME*)malloc(quant*sizeof(NOME));

    while((ch = fgetc(fp))!= EOF){
        if(ch == '\n')
            quant++;
    }

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
        
    }

    for (i=0; i<quant ; i++){
        printf("%d\n", sorteados[i]);
        printf("Digite ENTER para o próximo");
        //scanf(" %c", &ch);
        ch=getchar();
    }


}