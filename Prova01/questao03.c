
#include <stdio.h>
#include <stdlib.h>

void entrada03(int *compra,int *pagamento){
    printf("Informe o valor da compra: ");
    scanf("%d",compra);
    printf("Informe o valor do pagamento: ");
    scanf("%d",pagamento);
}

 void processamento03(int *compra,int *pagamento,int *n1, int *n10, int *n100){
     int troco;
    if(*pagamento < *compra){
        printf("Pagamento Negado\n");
    }
    else{
        troco = *pagamento - *compra;
        *n100 = troco/100;
        troco = troco - (*n100 * 100);
        *n10 = troco/10;
        troco = troco - (*n10 * 10);
        *n1 = troco/1;
    }
 }

  void saida03(int n1, int n10, int n100){
    if(n100 != 0)
        printf("Notas de 100: %d\n",n100);
    if(n10 != 0)
        printf("Notas de 10: %d\n",n10);
    if(n1 != 0)
        printf("Notas de 1: %d\n",n1);
 }


 void questao03 (void){
     int compra,pagamento;
     int n1,n10,n100;

     entrada03(&compra,&pagamento);

     processamento03(&compra,&pagamento,&n1,&n10,&n100);

     saida03(n1,n10,n100);

 }
