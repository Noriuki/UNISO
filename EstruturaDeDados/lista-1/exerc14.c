#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    int numerosala, capacidade, alunosmatriculados;
    
    printf("Digite o número da Sala: ");
    scanf("%d",&numerosala);
    printf("Digite a Capacidade da Sala: ");
    scanf("%d",&capacidade);
    printf("Digite a quantidade de Alunos Matriculados: ");
    scanf("%d",&alunosmatriculados);
    
    if (alunosmatriculados >= capacidade)
    {
      printf("SALA = %d\n",numerosala);
      printf("CAPACIDADE = %d\n",capacidade);
      printf("CADEIRAS OCUPADAS = %d\n",alunosmatriculados);
      printf("SALA LOTADA\n");
    }
    
    else if (alunosmatriculados < capacidade)
    {
      printf("SALA = %d\n",numerosala);
      printf("CAPACIDADE = %d\n",capacidade);
      printf("CADEIRAS OCUPADAS = %d\n",alunosmatriculados);
      printf("CADEIRAS VAZIAS = %d\n",(capacidade - alunosmatriculados));
      printf("SALA NAO LOTADA\n");
    }
    system("PAUSE");	
    return 0;
}
