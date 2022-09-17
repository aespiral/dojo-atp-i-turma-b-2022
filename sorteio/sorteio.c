#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num, i,j;
    int sorteados[12];
    bool achou;

    for(i = 0; i < 13; i++){
        num = rand() % 13;
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
        printf("%d\n", num + 1);
        sorteados[i]=num;
        
    }


}