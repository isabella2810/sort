def insertion_sort(arr):
  s=len(arr)
  
  if (s==0 or s==1):
    return
  for i in range(1,s):
    curr=arr[i];
    j=i-1;
    set=0
    while(curr<arr[j]):
      if(j==0):
        set=1
        break
      j=j-1
    if(set==1):
      arr.insert(0, curr)
      del arr[i+1]
    else:
      arr.insert(j+1, curr)
      del arr[i+1]
  return



  
arr=[7,1,20,60,4,5,22,3]
insertion_sort(arr)
for x in arr:
  print(x)
