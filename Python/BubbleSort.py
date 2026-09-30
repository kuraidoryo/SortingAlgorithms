def BubbleSort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        if not swapped:
            break
    return arr

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)

sorted_arr = BubbleSort(arr)

print("Sorted array:", sorted_arr)