#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    float num = 0.0;
    int divisoes = 0;
    
    printf("Digite o número a ser dividido: ");
    scanf("%f",&num);
    
    while(num >= 1){
        num /= 2;
        divisoes++;
        
        if(num < 1) {
           printf("Última Divisão: %.2f \n", num);
           printf("Vezes Divido: %i \n", divisoes);         
        }  
    }         
    
    system("PAUSE");	
    return 0;
}
