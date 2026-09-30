def QuickSort(arr: list[int]) -> list[int]:
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return QuickSort(left) + middle + QuickSort(right)

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)

sorted_arr = QuickSort(arr)

print("Sorted array:", sorted_arr)