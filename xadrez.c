#include <stdio.h>

int main(){

   int torre = 1;     //definição das variaveis
   int bispo = 1;

    printf("\n***movimento torre***\n"); //movimento da torre-while
   while (torre <= 5)
    {
        printf("\ntorre: direita\n");
        torre++;
    }
      printf("\n***movimento do bispo***\n");  // movimento do bispo do-while
    
     do
     {
       printf("\nbispo: cima,direita\n");
       bispo++;
    } while (bispo <= 5);
     
    printf("\n***movimento da rainha***\n");  //movimento da rainha-for

    for ( int rainha = 0; rainha < 8; rainha++)
    {
        printf("\nrainha: esquerda\n");
    }
    
    return 0;
    
    
}












