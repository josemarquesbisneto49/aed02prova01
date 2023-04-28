#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"
#include "questao03.h"

int main()
{
    int q = 1;

    do{
        printf("Informe o numero da questao (1 ou 3, ou 0 para sair): ");
        scanf("%d",&q);
        switch (q){
        case 1:
            questao01();
            break;
        case 3:
            questao03();
            break;
        case 0:
             printf("Thanks, Att, Jose Marques\n !!");
            break;
        default:
            printf("Informe uma questao valida !!\n");
        }
        system("pause");
        system("cls");
    }while(q != 0);

    return 0;
}
