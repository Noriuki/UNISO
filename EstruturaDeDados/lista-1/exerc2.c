#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int numPares = 0, soma = 0, i;

    for(i = 386; i < 932; i += 2 ) {
      soma += i;
      printf("%i\n", i);    
    } 
    printf("Soma dos números: %i\n", soma);
    system("PAUSE");	
    return 0;
}
