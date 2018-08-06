testcases = int(input())

for _ in range(testcases):
    k, num = input().split(" ")
    try:
        octv = int(num, 8)
    except:
        octv = "0"
    try:
        decv = int(num)
    except:
        decv = 0
    try:
        hexv = int(num, 16)
    except:
        hexv = 0

    print("{} {} {} {}".format(k, octv, decv, hexv))
