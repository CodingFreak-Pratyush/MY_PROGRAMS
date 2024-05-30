def mergesort(arr):
    mid=len(arr)//2
    left_side=arr[:mid]
    right_side=arr[mid:]
    mergesort(left_side)
    mergesort(right_side)
    i=j=k=0
    while i<len(left_side) and j<len(right_side):
        if left_side[i]<right_side[j]:
            arr[k]=left_side[i]
            i=i+1
        else:
            arr[k]=right_side[j]
            j=j+1
        k=k+1
    while i < len(left_side):
            arr[k] = left_side[i]
            i += 1
            k += 1

    while j < len(right_side):
        arr[k] = right_side[j]
        j += 1
        k += 1
arr=[6,4,2,1,9,8,3,5]
c=mergesort(arr)
print(c)