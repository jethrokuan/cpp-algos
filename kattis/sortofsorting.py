def getKey(name):
    return name[0:2]


if __name__ == "__main__":
    while True:
        x = int(input())
        if x == 0:
            break
        names = []
        for i in range(x):
            names.append(input())
        for i in sorted(names, key=getKey):
            print(i)
        print()
