#include <stdio.h>




   int main(){
   printf("novo commit\n");

   int torre = 1;
   int bispo = 1;
   int movcavalo = 1;
   int movcavalo2 = 1;

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
   
    while (movcavalo--)
    {
        for (movcavalo2 = 0; movcavalo2 < 2; movcavalo2++)
        {
            printf("\nbaixo\n");
        }
        printf("\nesquerda\n");
    }
    
    return 0;
}
