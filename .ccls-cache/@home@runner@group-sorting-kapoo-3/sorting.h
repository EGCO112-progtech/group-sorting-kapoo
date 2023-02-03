// selection sort function module in C
#include <stdio.h>

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int a[], int n) {
  int i, j;
  int m = a[0]; // dec m is min
  int mi = 0;

  for (j = 0; j < n - 1; j++) {
    m = a[j];
    mi = j;

    for (i = j + 1; i < n; i++) {
      if (m < a[i]) // find real min
      // if (a[mi] > a[i])
      {
        m = a[i];
        mi = i;
      }
    }
    swap(&a[j], &a[mi]);
    display(a, n);
    printf("\n");
  }
}

void insertion(int x[], int n) {
  int j, i;
  for (j = 1; j < n; j++) {
    int value = x[j];
    for (i = j - 1; i >= 0; i--) {
      if (value < x[i])
        break;
      else
        x[i + 1] = x[i];
      display(x, n);
    }
    x[i + 1] = value;
    display(x, n);
    printf("\n");
  }
}

void bubbleSort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int sorted;
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] < a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    printf("\n");
    if (sorted == 0)
      break;
  }
}