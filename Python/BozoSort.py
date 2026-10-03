import random

def BogoSort(arr: list[int]) -> list[int]:
    def is_sorted(arr: list[int]) -> bool:
        return all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1))

    while not is_sorted(arr):
        a = random.randint(0, len(arr)-1)
        b = random.randint(0, len(arr)-1)
        arr[a], arr[b] = arr[b], arr[a]
    return arr

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)

sorted_arr = BogoSort(arr)

print("Sorted array:", sorted_arr)