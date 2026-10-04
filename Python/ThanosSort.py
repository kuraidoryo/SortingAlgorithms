def ThanosSort(arr: list[int]) -> list[int]:
    while len(arr) > 1:
        arr = arr[:len(arr) // 2]
    return arr

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)

sorted_arr = ThanosSort(arr)

print("Sorted array:", sorted_arr)