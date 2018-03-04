#include <stdio.h>

//Unlike merge in mergeSort, the partition procedure in quickSort is in place
int partition(int *arr, int start, int end){
  //pick a pivot value and put it at the end of the (sub)array
  int pivot_value=arr[(start+end)/2];
  arr[(start+end)/2]=arr[end];
  arr[end]=pivot_value;
  
  int i=start-1;
  int j;
  
  for(j=start;j<end;j++){
    if(arr[j]<pivot_value){
      i++;
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }
  i++;
  arr[end]=arr[i];
  arr[i]=pivot_value;
  return i;
  
}


void quickSort(int *arr, int start, int end){
  
  if(start>=end)
    return;
  
  int pivot_index = partition(arr, start, end);
  quickSort(arr,start,pivot_index-1);
  quickSort(arr,pivot_index+1,end);
}

int main(void) {
  int arr[]={2,5,1,8,4,6,3}; //7 elements
  quickSort(arr,0,6);
  int i;
  for (i=0;i<7;i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}
