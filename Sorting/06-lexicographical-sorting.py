# Sort Strings of Array in Lexicographical Order with Python

def cmp(a: str, b: str) -> bool:
    len_a, len_b = len(a), len(b)
    for i in range(min(len_a, len_b)):
        if a[i] > b[i]:
            return True
        if a[i] < b[i]:
            return False
    return len_a > len_b


def insertion_sort(a: list) -> None:
    a, n = a, len(a)
    for i in range(1, n):
        for j in range(i, 0, -1):
            if cmp(a[j-1], a[j]):
                a[j-1], a[j] = a[j], a[j-1]
            else:
                break


if __name__ == "__main__":
    strs = ["ab", "aaab", "aa", "bac", "acb"]
    print(strs)
    insertion_sort(strs)
    print(strs)

# by Shihab Mahamud (github.com/shihab4t)
