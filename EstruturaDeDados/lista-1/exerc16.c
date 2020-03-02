#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int num, i;
    float media;
    
    for(i = 1; i <= 3; i++)
    {
          printf("Digite a nota %i: ", i);
          scanf("%i", &num);
          media += num;   
    }
    
    media /= 3;
    
    
    if(media >= 6) {
         printf("Média %.2f , Aprovado!\n", media);                    
    }
    else if(media < 6) {
         printf("Média %.2f , Reprovado!\n", media);     
    }
    
    system("PAUSE");	
    return 0;
}
