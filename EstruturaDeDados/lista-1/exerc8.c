#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    
    setlocale(LC_ALL,"");
    int num;
        
    printf("Digite um n�mero: ");
    scanf("%i",  &num);
    
    if(num == 2) {
        printf("N�mero primo!\n");       
    }
    else if(num % 2 > 0) {
        printf("N�mero � primo!\n");  
    }
    else{
         printf("N�mero n�o primo!\n");     
    }
    
    system("PAUSE");	
    return 0;
}
