// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int x[],int n){
 int j,i;
  for(j=1;j<n;j++){
  int value =x[j];
  for(i=j-1;i>=0;i--){
    if(value<x[i]) break;
      else x[i+1]=x[i];
    display(x,n);
    }
  x[i+1]=value;
    display(x,n);
    printf("\n");
    }


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




