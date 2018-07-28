if __name__ == "__main__":
    for i in range(int(input())):  # For each test case
        sentence = input().split()
        sounds = set()
        while True:
            y = input().split()
            if len(y) != 3:
                print(" ".join(list(
                    filter(lambda s: not s in sounds, sentence))))
                break
            else:
                sounds.add(y[2])
