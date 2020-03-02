#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int atual = 0, anterior = 0, proximo = 0, i;
    
    for(i=0; i < 20; i++) {
        if(i == 1 || i == 2) { atual = 1; anterior = 0;}
        proximo = atual + anterior; 
        anterior = atual;
        atual = proximo;
        
        printf("%i\n", proximo);
    }
    
    system("PAUSE");	
    return 0;
}
