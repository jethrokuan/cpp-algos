from math import pow
nums = int(input())
x = []

for i in range(nums):
    s = input()
    x.append([int(s[:-1]), int(s[-1])])

s = 0
for n, p in x:
    s += pow(n, p)

print(int(s))
