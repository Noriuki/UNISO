#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int numImpares = 0, produto = 1, i;

    for(i = 3; i < 15; i += 2 ) {
      produto *= i;
      printf("%i . ", i);    
    } 
    printf("Produto dos números: %i\n", produto);
    system("PAUSE");	
    return 0;
}
