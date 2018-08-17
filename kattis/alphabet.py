def longest_increasing_subsequence(arr):
    l = len(arr)
    # Initialize LIS
    lis = [1] * l

    for i in range(1, l):
        for j in range(0, i):
            if arr[i] > arr[j]:
                lis[i] = max(lis[i], lis[j] + 1)

    return max(lis)

s = input()
print(26 - longest_increasing_subsequence(s))
