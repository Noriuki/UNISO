#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int num, num2, soma;
    
    printf("Digite um n�mero: ");
    scanf("%i", &num);
    
    printf("Digite outro n�mero: ");
    scanf("%i", &num2);
    
    soma = ( num + num2 ) >= 1000 ? "maior ou Igual a 1000"  : "menor que 1000";
    
    printf("A soma dos n�meros � %s.\n", soma);
    system("PAUSE");	
    return 0;
}
