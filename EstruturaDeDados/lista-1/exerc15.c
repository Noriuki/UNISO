#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int num;
    
    printf("Digite um n�mero: ");
    scanf("%i", &num);
    
    if(num >= 0 && num%3 == 0) {
         printf("O n�mero n�o � negativo e divisivel por 3.\n");       
    }
    else if(num < 0 && num%3 > 0) {
         printf("O n�mero � negativo e n�o divisivel por 3.\n");  
    } else {
         printf("O n�mero � negativo e disivivel por 3.\n");  
    }
    
    system("PAUSE");	
    return 0;
}
