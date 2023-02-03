#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i, j = 0, *a, N;

  N = argc - 2;
  a = (int *)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++) {
    a[i] = atoi(argv[i + 1]);
  }
  display(a, N);
  if (!(strcmp(argv[1], "bubble")))
    bubbleSort(a, N);
  if (!(strcmp(argv[1], "insertion")))
    insertion(a, N);
  if (!(strcmp(argv[1], "selection")))
    selectionSort(a, N);
  printf("\n");
  display(a, N);
  return 0;
}
