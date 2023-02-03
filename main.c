#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char* argv[]){
  int i , j = 0 , new_number , N , *a ;
  N = argc - 1;
  a = (int*)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++)
  {
    a[i] = atoi(argv[i+1]);
  }

  //insertion(a,N);
  printf("------------------------------------------\n");
  bubbleSort(a,N);
  //SSselectionSort(a,N);
  return 0;
}