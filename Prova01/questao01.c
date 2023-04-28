#include <stdio.h>
#include <stdlib.h>

void entrada01(float *raio){
    printf("Informe o raio: ");
    scanf("%f",raio);
}

 void processamento01(float *raio, float *area, float *diametro, float *perimetro, float *volume){
     float pi = 3.14;
     *perimetro = 2*pi*(*raio);
     *area = pi*((*raio)*(*raio));
     *diametro = 2 * (*raio);
     *volume = (4/3) * pi * ((*raio)*(*raio)*(*raio));

 }

  void saida01(float raio, float area, float diametro, float perimetro, float volume){
    printf("Perimetro: %.2f\n",perimetro);
    printf("Area: %.2f\n",area);
    printf("Diametro: %.2f\n",diametro);
    printf("Volume: %.2f\n",volume);
 }


 void questao01 (void){
     float raio,area,diametro,perimetro,volume;

     entrada01(&raio);

     processamento01(&raio,&area,&diametro,&perimetro,&volume);

     saida01(raio,area,diametro,perimetro,volume);

 }
