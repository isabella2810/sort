# Because we add a "exchanged" flag, the best case is О(n) 
# But the worst and average case is still О(n^2)

import math

def bubble_sort(arr):
  s=len(arr)
  if (s<2):
    return arr
  
  for i in reversed(range(1,s+1)):
    exchange=0
    for j in range(i-1):
      if(arr[j]>arr[j+1]):
        arr[j],arr[j+1]=arr[j+1],arr[j]
        exchanged=1
    if(exchanged==0):
      break
    
  
  return


  
arr=[7,1,20,60,4,5,22,3]
bubble_sort(arr)
for x in arr:
  print(x)
