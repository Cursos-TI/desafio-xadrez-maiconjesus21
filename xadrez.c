#include <stdio.h>




int main(){

   int torre = 1;
   int bispo = 1;
   int movcavalo2 = 0;

    printf("\n***movimento torre***\n");  //movimento da torre
   while (torre <= 5)
    {
        printf("\ntorre: direita\n");     
        torre++;
    }
      printf("\n***movimento do bispo***\n"); //movimento do bispo
    
     do
     {
       printf("\nbispo: cima,direita\n");
       bispo++;
    } while (bispo <= 5);
     
    printf("\n***movimento da rainha***\n"); //movimento da rainha

    for ( int rainha = 0; rainha < 8; rainha++)
    {
        printf("\nrainha: esquerda\n");
    }
    
     printf("\n\n***movimento do cavalo***\n\n");   //movimento do cavalo
   
     for  (int movcavalo = 0; movcavalo < 1; movcavalo++)
     {
        printf("\ncavalo: baixo\n");
        printf("\ncavalo: baixo\n");
        while (movcavalo2 < 1)
        {
        printf("\ncavalo: esquerda\n");
        movcavalo2++;
        }
    }
    return 0;
}












