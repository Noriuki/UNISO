#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    
    setlocale(LC_ALL,"");
    int num;
        
    printf("Digite um número: ");
    scanf("%i",  &num);
    
    if(num == 2) {
        printf("Número primo!\n");       
    }
    else if(num % 2 > 0) {
        printf("Número é primo!\n");  
    }
    else{
         printf("Número não primo!\n");     
    }
    
    system("PAUSE");	
    return 0;
}
