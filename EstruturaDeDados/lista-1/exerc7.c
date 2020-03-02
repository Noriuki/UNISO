#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int i; float pol;
    
    for(i = 1; i <= 20; i++) {
          pol = i / 2.54;
          
          printf("%icm = %.2f pol\n", i, pol);
    }
    system("PAUSE");	
    return 0;
}
