def QuickSort(arr):

    elements = len(arr)

    if elements < 2:
        return arr

    curr_position = 0
    for i in range(1, elements):
        if arr[i] <= arr[0]:
            curr_position += 1
            temp = arr[i]
            arr[i] = arr[curr_position]
            arr[current_position] = temp

    temp = arr[0]
    arr[0] = arr[curr_position]
    arr[current_position] = temp

    left = QuickSort(arr[0:curr_position])
    right = QuickSort(arr[curr_position+1:elements])

    arr = left + [arr[curr_position]] + right

    return arr


arr = list(map(int, input().split()))
print("Sorted Array: ", QuickSort(arr))
