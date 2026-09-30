def merge(left: list[int], right: list[int]) -> list[int]:
    result: list[int] = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1

    result.extend(left[i:])
    result.extend(right[j:])

    return result

def MergeSort(arr: list[int]) -> list[int]:
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left_half = MergeSort(arr[:mid])
    right_half = MergeSort(arr[mid:])

    return merge(left_half, right_half)

arr = [2, 1, 3, 7, 6, 9]

print("Original array:", arr)
sorted_arr = MergeSort(arr)
print("Sorted array:", sorted_arr)