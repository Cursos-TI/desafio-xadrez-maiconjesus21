#include <stdio.h>



   printf("novo commit\n");

  void torr(int torre){
    if (torre > 0){
      printf("\ntorre: direita\n");
      torr(torre - 1);
    }
  }
  void bisp(int bispo){
   while (bispo < 5){
    printf("\nbispo: cima\n");
    bispo++;
    for (int mov = 0; mov < 5; mov++)break;
   {
    printf("\nbispo: direita\n");
   }
   } 
   
    
  }
  void rainh(int rainha){
     if (rainha > 0)
     {
      rainh(rainha - 1);
      printf("\nrainha: esquerda\n");
     }
     
    
  }
   void caval(int cavalo){
      int movcav = 1;

      while(movcav--){
        for (int movimento = 0; movimento < 2; movimento++)
        {
          printf("\ncavalo: cima\n");
        }
        printf("\ncavalo: direita\n");
      }
    
    }
    
     
    
    
  
   




 
int main(){
  printf("\n***torre***\n");
  torr(5);
  printf("\n");
  printf("\n***bispo***\n");
  bisp(0);
  printf("\n");
  printf("\n***rainha***\n");
  rainh(8);
  printf("\n***cavalo***\n");
  caval(0);
  
 return 0;

}

