#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int num, i;
    
    printf("Digite um número: ");
    scanf("%i", &num);

    for(i = 1; i <= 13; i ++) {
      printf("%i * %i = %i \n", num, i, num * i);    
    } 
    system("PAUSE");	
    return 0;
}
