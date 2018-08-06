i = input()
j = input()

i1 = [int(c) for c in i][::-1]
j1 = [int(c) for c in j][::-1]

i2 = []
j2 = []

if len(i) > len(j):
    for idx in range(len(j1)):
        if j1[idx] > i1[idx]:
            j2.append(j1[idx])
        elif j1[idx] == i1[idx]:
            i2.append(i1[idx])
            j2.append(j1[idx])
        else:
            i2.append(i1[idx])

    for idx in range(len(j1), len(i1)):
        i2.append(i1[idx])
else:
    for idx in range(len(i1)):
        if j1[idx] > i1[idx]:
            j2.append(j1[idx])
        elif j1[idx] == i1[idx]:
            i2.append(i1[idx])
            j2.append(j1[idx])
        else:
            i2.append(i1[idx])

    for idx in range(len(i1), len(j1)):
        j2.append(j1[idx])

i3 = "".join(map(str, i2[::-1]))
j3 = "".join(map(str, j2[::-1]))

print(int(i3) if i3 else "YODA")
print(int(j3) if j3 else "YODA")
