i = input()

w = 0
b = 0
for c in i:
    if c == "W":
        w += 1
    else:
        b += 1

print(int(w == b))
