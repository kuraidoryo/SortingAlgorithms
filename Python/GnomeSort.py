def GnomeSort(arr: list[int]) -> list[int]:
    n = len(arr)
    index = 0
    while index < n:
        if index == 0:
            index += 1
        if arr[index] >= arr[index - 1]:
            index += 1
        else:
            arr[index], arr[index - 1] = arr[index - 1], arr[index]
    return arr

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)

sorted_arr = GnomeSort(arr)

print("Sorted array:", sorted_arr)