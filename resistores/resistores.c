#include <stdio.h>
#include <stdbool.h>

int main(){
    char cor1[100], cor2[100], cor3[100];
    char fica;

    do{
        printf("Digite uma cor: ");
        scanf("%s", &cor1[0]);
        printf("%s\n", cor1);
        printf("Digite a segunda cor: ");
        scanf("%s", &cor2[0]);
        printf("%s\n", cor2);
        printf("Digite a terceira cor: ");
        scanf("%s", &cor3[0]);
        printf("%s\n", cor3);
        printf("Quer continuar? (S / N)\n");
        scanf(" %c", &fica);

    }while(fica != 'n' || fica != 'N');

    return 0;
}