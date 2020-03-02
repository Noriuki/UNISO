#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int numeros[3] , maior, i;
    
    for(i = 0; i < 3; i++) {
        printf("Digite um numero: ");
        scanf("%i", &numeros[i] );
        if(i == 0) { maior = numeros[i];}
        if(numeros[i] > maior) {
            maior = numeros[i];         
        }
    }
    printf("O maior número é: %i\n", maior);
    
    system("PAUSE");	
    return 0;
}
