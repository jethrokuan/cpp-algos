testcases = int(input())

for i in range(testcases):
    x = input()
    nums = [int(j) for j in x.split()[1:]]
    average = sum(nums) / len(nums)
    print("{:0.3f}%".format(len(
        list(filter(lambda d: d > average, nums)))/len(nums) * 100))
