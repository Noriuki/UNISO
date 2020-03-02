#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int alunos[45][2], i, idade, altura, cont1 = 0, cont2 = 0;
    float AlunosBaixos = 0.0, AlunosVelhos = 0.0;
    
    for(i = 0; i < 45; i++) {
          
          printf("Digite a Idade do Aluno: ");
          scanf("%i", &idade);
          printf("Digite a Altura do Aluno(cm): ");
          scanf("%i", &altura);
          
          if(altura < 170) {
              AlunosBaixos += idade;
              cont1 ++;
          }
          else if(idade > 20){
              AlunosVelhos += altura;
              cont2++; 
          }
          
          alunos[i][0] = idade;
          alunos[i][1] = altura;
          
    }
    AlunosBaixos = cont1 > 0 ? (AlunosBaixos/cont1): 0;
    AlunosVelhos = cont2 > 0 ? (AlunosVelhos/cont2): 0;

    printf("Idade Média dos Alunos abaixo de 1,70m : %.2f\n", AlunosBaixos);
    printf("Altura Média dos Alunos acima de 20 anos : %.2f\n", AlunosVelhos);
    
    system("PAUSE");	
    return 0;
}
