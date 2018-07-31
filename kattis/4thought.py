operations = ["*", "-", "+", "/"]
val_map = {}

for op1 in operations:
    for op2 in operations:
        for op3 in operations:
            r = eval("4 {} 4 {} 4 {} 4".format(op1, op2, op3))
            val_map[r] = "4 {} 4 {} 4 {} 4 = {}".format(op1, op2, op3, int(r))

testcases = int(input())

for _ in range(testcases):
    t = int(input())
    if t in val_map.keys():
        print(val_map[t])
    else:
        print("no solution")
