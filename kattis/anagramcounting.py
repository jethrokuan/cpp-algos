import sys

factorials = {0: 1}
for i in range(1, 101):
    factorials[i] = i * factorials[i - 1]


def get_num_anagrams(counts):
    vals = counts.values()
    denom = 1
    for i in vals:
        denom *= factorials[i]
    return int(factorials[sum(vals)] // denom)


if __name__ == "__main__":
    for _input in sys.stdin:
        _input = _input.split()[0]
        counts = {}
        for c in _input:
            if counts.get(c) is not None:
                counts[c] += 1
            else:
                counts[c] = 1
        print(get_num_anagrams(counts))
