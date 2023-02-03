// selection sort function module in C
#include <stdio.h>
void swap(int *a, int *b);
void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int data[], int length) {
  int i, j, m, mi;
  for (i = 0; i < length - 1; i++) {
    mi = i;
    for (j = i + 1; j < length; j++) {
      if (data[j] < data[mi]) {
        mi = j;
      }
    }
    swap(&data[i], &data[mi]);
    // m = data[i];
    // data[i] = data[mi];
    // data[mi] = m;
    printf("minimum is %d ...\n", data[i]);
    display(data, length);
  }
  // display(data,length);
}

void insertion(int data[], int length) {
  int i,j;
  for(i=1;i<length;i++){
    int value=data[i];
  for(j=i-1;j>=0&&value<data[j];j--)
    {
      data[j+1]=data[j];
      display(data, length);
    }
  data[j+1] = value;
}
  display(data, length);
  }
void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (i = 0; i < n - 1; i++) {
    sorted = 0;

    for (j = 0; j <= n - 2 - i; j++) {
      if (a[j] > a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }

      display(a, n);
    }
    if (sorted == 0)
      break;
  }
}
int isprime(int a) {
  int check = 0;
  if (a == 1) {
    return 0;
  } else {
    for (int i = 2; i < a - 1; i++) {
      if ((a % i) == 0 || a == 1) {
        check++;
      }
    }
    if (check == 0)
      return 1;
    else
      return 0;
  }
}
