
#include <stdio.h>  // necessario para as funcoes de input e output
#include <stdlib.h> // necessario para as funcoes "rand()" e "srand()"
#include <time.h>   // necessario para usar a hora atual na geracao da semente

int main(void) {
int i = 0, v, igual, vetor[6];

  printf("Estes código sorteia \n\n");
  printf("Estes foram os números sorteados:\n\n");
  srand(time(0));

  do{
    vetor[i] = rand() % 100;

    igual = 0;
      for(v = 0; v < i; v++)
      {
      if(vetor[v] == vetor[i])
        igual = 1;
    }
    if(igual == 0)
      i++;
  }
    while(i < 6);

  for(i = 0; i < 6; i++){
    printf("%d ", vetor[i]);
  }

  for (i=0; i<6; i++){
      int org = vetor[i];
      v = i - 1;
      while (v >= 0 && vetor[v] > org){
        vetor[v+1] = vetor[v];
        v = v - 1;
      }
      vetor[v + 1] = org;
  }
  printf("\n");
    printf("Números em ordem crescente:\n");
    for (i = 0; i < 6; i++){
      printf("%d ", vetor[i]);
 }  
  return 0;
}