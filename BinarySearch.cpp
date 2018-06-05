#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * Binary Search Algorithm
 * T(n) = O(logN) where N is array size
 * Implemented in iterative loops (can also be implemented by recursive function)
*/
class BinarySearch{
public:
  //Pre-condition: numbers is already sorted in ascending order!!!
  BinarySearch(int* numbers, size_t size);

  ~BinarySearch();

  int search(int target);

private:
  int* number_array;
  size_t array_size;
};

BinarySearch::BinarySearch(int* numbers, size_t size){
  array_size = size;

  number_array = new int[size];
  size_t i;
  for(i=0;i<size;i++){
    number_array[i] = numbers[i];
  }
}

BinarySearch::~BinarySearch(){
  delete [] number_array;
}

int BinarySearch::search(int target){
  int left = 0;
  int right = array_size-1;

  while(left<=right){
    int middle = (left+right)/2;
    if(number_array[middle] == target){
      return middle;
    }
    else if(number_array[middle] < target){
      left = middle + 1;
      continue;
    }
    else{
      right = middle - 1;
      continue;
    }
  }

  return -1;
}

int main(){
  int numbers[] = {-7, 9, 16, 17, 99, 100};
  BinarySearch obj(numbers,6);
  while(1){
    cout<<"Enter the number you want to search (Enter -1000 to exit): ";
    int input;
    cin>>input;

    if (input == -1000){
      return 0;
    }

    int index = obj.search(input);
    if(index==-1){
      cout<<input<<" does NOT exist in the array\n";
    }
    else{
      cout<<"The index for "<<input<<" in the array is "<<index<<endl;
    }

  }
}
