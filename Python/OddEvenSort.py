def OddEvenSort(arr: list[int]) -> list[int]:
    n = len(arr)

    is_sorted = False
    
    while not is_sorted:
        is_sorted = True

        for i in range(1, n-1, 2):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                sorted = False

        for i in range(0, n-1, 2):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                sorted = False
    return arr

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)

sorted_arr = OddEvenSort(arr)

print("Sorted array:", sorted_arr)