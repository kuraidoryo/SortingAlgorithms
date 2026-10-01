def ShakerSort(arr: list[int]) -> list[int]:
    n = len(arr)
    
    if n == 0:
        return arr
    
    start = 0
    end = n - 1
    swapped = True

    while swapped:
        swapped = False

        for i in range(start, end):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                swapped = True
        end -= 1
        
        if not swapped:
            break
        
        swapped = False

        for i in range(end, start, -1):
            if arr[i] < arr[i - 1]:
                arr[i], arr[i - 1] = arr[i - 1], arr[i]
                swapped = True
        start += 1

    return arr

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)

sorted_arr = ShakerSort(arr)

print("Sorted array:", sorted_arr)