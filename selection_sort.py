# Time Complexity: О(n2) comparisons, О(n) swaps

def selection_sort(arr):
  s=len(arr)
  if (s<2):
    return arr
  
  for i in range(s):
    min_index=i
    for j in range(i,s):
      if(arr[j]<arr[min_index]):
        min_index=j
    temp=arr[i]
    arr[i]=arr[min_index]
    arr[min_index]=temp
    
  return

arr=[7,1,20,60,4,5,22,3]
selection_sort(arr)
for x in arr:
  print(x)
