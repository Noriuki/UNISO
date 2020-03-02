#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int num;
    
    printf("Digite um número: ");
    scanf("%i", &num);
    
    if(num%3 == 0 && num%5 == 0)
    {
        printf("Número divisivel por 3 e 5\n");
                     
    }
    else
    {
        printf("Número não divisivel por 3 e 5\n");          
    }
    
    system("PAUSE");	
    return 0;
}
