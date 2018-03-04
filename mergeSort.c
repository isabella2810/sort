// Time Complexity: O(n*log n)

#include <stdio.h>

void merge(int *arr, int start, int mid, int end){
  int b[end-start+1]; //merge sort is NOT in place
  int p=start;
  int q=mid+1;
  int i=0;
  
  while(p<=mid && q<=end){
    if(arr[p]<arr[q]){
      b[i]=arr[p];
      p++;
    }
    else{
      b[i]=arr[q];
      q++;
    }
    i++;
  }
  
  while(p<=mid){
    b[i]=arr[p];
    p++;
    i++;
  }
  while(q<=end){
    b[i]=arr[q];
    q++;
    i++;
  }
  
  for(i=start;i<=end;i++){
    arr[i]=b[i-start];
  }
  return;
}

void mergeSort(int *arr, int start, int end){
  
  if(start>=end)
    return;
  
  int mid=(start+end)/2;
  mergeSort(arr,start,mid);
  mergeSort(arr,mid+1,end);
  merge(arr, start, mid, end);  //This step takes Θ(n) time
}

int main(void) {
  int arr[]={2,5,1,8,4,6,3}; //7 elements
  mergeSort(arr,0,6);
  int i;
  for (i=0;i<7;i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}
