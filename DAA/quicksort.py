def quicksort(arr):
    if len(arr)<=1:
        return arr
    else:
        pivot=arr[0]
        less_then_pivot=[]
        greater_than_pivot=[]
        for x in arr[1:]:
            if x<=pivot:
                less_then_pivot.append(x)
            else:
                greater_than_pivot.append(x)
        return quicksort(less_then_pivot)+[pivot]+quicksort(greater_than_pivot)

arr=[90,100,30,20,5,80,40]
c=quicksort(arr)
print(c)