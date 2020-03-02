#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    float a, b, c, delta, RaizI, RaizII;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    delta = ((b*b)-4*(a*c));
    
    if(delta == 0) {
         printf("As raizes sao X1=X2=%.2f\n",(-b/2*a));         
    }
    else if(delta < 0) { printf("Nenhuma raiz real possível!");}
    else{
         RaizI = (-b + sqrt(delta)) / (a * 2);
         RaizII = (-b - sqrt(delta)) / (a * 2);
         
         printf("XI = %.2f \n", RaizI);
         printf("XII = %.2f \n", RaizII);
    }
    
    
    system("PAUSE");	
    return 0;
}
