#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int num;
    
    printf("Digite um número: ");
    scanf("%i", &num);
    
    if(num >= 0 && num%3 == 0) {
         printf("O número não é negativo e divisivel por 3.\n");       
    }
    else if(num < 0 && num%3 > 0) {
         printf("O número é negativo e não divisivel por 3.\n");  
    } else {
         printf("O número é negativo e disivivel por 3.\n");  
    }
    
    system("PAUSE");	
    return 0;
}
