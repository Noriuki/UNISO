#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int numeros[20], i;
    int maior = 0, menor = 1;
   
    for(i = 0; i < 20; i++) {
          printf("Digite um n�mero: ");
          scanf("%i", &numeros[i]); 
            
          if(numeros[i] > maior) {
               maior = numeros[i];             
          }
          else if(numeros[i] <= menor) {
               menor = numeros[i];  
          }
    } 

    printf("maior n�mero digitado: %i.\n", maior);
    printf("menor n�mero digitado: %i.\n", menor);
    
    system("PAUSE");	
    return 0;
}
