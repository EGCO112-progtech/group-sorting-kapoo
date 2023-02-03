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

void selectionSort(int data[], int length) {
  display(data, length);
  int i, j, m, mi;
  for (j = 0; j < length - 1; j++) {

    m = data[j];
    mi = j;

    for (i = j + 1; i < length; i++) {
      if (m < data[i]) {
        m = data[i];
        mi = i;
      }
    }
    swap(&data[j], &data[mi]);
    display(data, length);
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

void bubbleSort(int a[], int n) 
{
  for (int i = 0; i < n - 1; i++) 
  {
    int sorted;
    for (int j = 0; j < n - i - 1; j++) 
    {
      if (a[j] < a[j + 1]) 
      {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    printf("\n");
    if (sorted == 0)break;
  }
}