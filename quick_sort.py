import math

def quick_sort(arr):
  
  if (len(arr)<2):
    return arr
  
  i=math.floor(len(arr)/2)
  pivot=arr[i]
  left=[]
  middle=[]
  right=[]
  for x in arr:
    if(x<pivot):
      left.append(x)
    elif(x==pivot):
      middle.append(x)
    else:
      right.append(x)
  
  return quick_sort(left)+middle+quick_sort(right)


  
arr=[7,1,20,60,4,5,22,3]
arr=quick_sort(arr)
for x in arr:
  print(x)
