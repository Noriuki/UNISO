#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int x, y;
    
    printf("Digite o valor de X: ");
    scanf("%i", &x);
    
    if(x < 1) { y = x;}
    if(x == 1) { y = 0;}
    if(x > 1 ) {y = x * x;}
    
    printf("Valor de y: %i\n", y);
    system("PAUSE");	
    return 0;
}
