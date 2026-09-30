def SelectionSort(arr: list[int]) -> list[int]:
    n = len(arr)
    for i in range(n-1):
        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        if min_idx != i:
            arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)

sorted_arr = SelectionSort(arr)

print("Sorted array:", sorted_arr)