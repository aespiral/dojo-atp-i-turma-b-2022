#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char cor[100];
    int cod;
} ITEM;

ITEM tabela [13]={{"Preto",0},
                  {"Marrom",1},
                  {"Vermelho",2},
                  {"Laranja",3},
                  {"Amarelo",4},
                  {"Verde",5},
                  {"Azul",6},
                  {"Violeta",7},
                  {"Cinza",8},
                  {"Branco",9},
                  {"Dourado",-1}
                  };

int converte (char* cor){
    int i;

    for(i=0; i<13; i++){
        if(strcmp (cor,tabela[i].cor) == 0)
            return tabela[i].cod;
    }
    return -2;
}

int main(){
    float res;
    int n1, n2, n3, i;
    bool achou;
    char cor1[100], cor2[100], cor3[100];
    char fica;
    int combs[13][2]={{1,0}, 
                      {1,2}, 
                      {1,5},
                      {1,8},
                      {2,2},
                      {2,7},
                      {3,3},
                      {3,9},
                      {4,7},
                      {5,6},
                      {6,8},
                      {8,2},
                      {9,1}};

    do{
        printf("Digite uma cor: ");
        scanf("%s", &cor1[0]);

        n1 = converte(cor1);
        printf("Digite a segunda cor: ");
        scanf("%s", &cor2[0]);

        n2 = converte(cor2);

        achou= false;
        for(i=0; i<13; i++){
            if(n1==combs[i][0] && n2==combs[i][1]){
                achou=true;
            }
        } 
        if (!achou){
            printf("Essa combinação não existe!!\n\n");
            continue;
        }
        res = n1*10.0 + n2;
        

        printf("Digite a terceira cor: ");
        scanf("%s", &cor3[0]);

        n3 = converte(cor3);

        if(n3 == -1){
            res = res / 10;
        }else{
            for(i=0; i<n3; i++){
                res = res*10;
            }
        }

        if (res>=1000000.0){
            printf("%.1f%c\n", res / 1000000.0,'M');
        }else if(res >= 1000.0 ){
            printf("%.1f%c\n", res / 1000.0,'K');
        }else{
            printf("%.1f\n", res);
        }



        printf("Quer continuar? (S / N)\n");
        scanf(" %c", &fica);


    }while(fica != 'n' && fica != 'N');

    return 0;
}