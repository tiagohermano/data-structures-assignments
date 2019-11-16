#include <stdio.h>
#include <string.h>

void insertionSort(int arr[], int arrSize);

typedef struct {
  char nome[30];
  int nota;
} Aluno;

int main() {
  int numAlunos;
  scanf("%d", &numAlunos);

  Aluno alunos[numAlunos];

  int i;
  for(i=0;i<numAlunos;i++) {
    scanf("%s %d", alunos[i].nome, &alunos[i].nota);
  }

  // ordenar alunos por nome
  for(int i=0; i<numAlunos; i++) {
    int j = i;
    while(j > 0 && strcmp(alunos[j].nome, alunos[j+1].nome ) > 0) {
      Aluno temp = alunos[j-1];
      alunos[j-1] = alunos[j];
      alunos[j] = temp;
      j--;
    }
  }

  // ordenar alunos por nota
  // for(int i=0; i<numAlunos; i++) {
  //   int j = i;
  //   while(j > 0 && alunos[j-1].nota <= alunos[j].nota) {
  //     Aluno temp = alunos[j-1];
  //     alunos[j-1] = alunos[j];
  //     alunos[j] = temp;
  //     // if(alunos[j-1].nota == alunos[j].nota) {
  //     //   if(strcmp(alunos[j].nome, alunos[j+1].nome) > 0) {
  //     //     Aluno temp = alunos[j-1];
  //     //     alunos[j-1] = alunos[j];
  //     //     alunos[j] = temp;
  //     //     // j--;
  //     //   }
  //     // }
  //     j--;
  //   }
  // }

  printf("\n");
  for(i=0;i<numAlunos;i++) {
    printf("%s %d\n", alunos[i].nome, alunos[i].nota);
  }

  return 0;
}