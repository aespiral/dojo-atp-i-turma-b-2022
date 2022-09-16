#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int tabela (char* cor){
    if (strcmp(cor,"Preto") == 0 )
        return 0;
    if (strcmp(cor,"Marrom") == 0)
        return 1;
    if (strcmp(cor,"Vermelho") == 0 )
        return 2;
    if (strcmp(cor,"Laranja") == 0 )
        return 3;
    if (strcmp(cor,"Amarelo") == 0 )
        return 4;   
    if (strcmp(cor,"Verde") == 0 )
        return 5;    
    if (strcmp(cor,"Azul") == 0 )
        return 6; 
    if (strcmp(cor,"Violeta") == 0 )
        return 7;
    if (strcmp(cor,"Cinza") == 0 )
        return 8;
    if (strcmp(cor,"Branco") == 0 )
        return 9;
    if (strcmp(cor,"Dourado") == 0 )
        return -1;
}

int main(){
    int n1, n2, n3, i, res;
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
        printf("%d\n", tabela(cor1));
        n1 = tabela(cor1);
        printf("Digite a segunda cor: ");
        scanf("%s", &cor2[0]);
        printf("%d\n", tabela(cor2));
        n2 = tabela(cor2);

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
        res = n1*10 + n2;
        printf("%d\n", res);

        printf("Digite a terceira cor: ");
        scanf("%s", &cor3[0]);
        printf("%d\n", tabela(cor3));
        n3 = tabela(cor3);
        for(i=0; i<n3; i++){
            res = res*10;
        }

        printf("%d\n", res);



        printf("Quer continuar? (S / N)\n");
        scanf(" %c", &fica);


    }while(fica != 'n' && fica != 'N');

    return 0;
}