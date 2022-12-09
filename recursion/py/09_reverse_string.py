def print_reverse(st: str, n: int) -> None:
    if n == 0:
        return
    print(st[n-1], end="")
    print_reverse(st, n-1)


def reverse(st: str, n: int) -> str:
    if n == 0:
        return ""
    return st[n-1] + reverse(st, n-1)


st = input()
print_reverse(st, len(st))
print(reverse(st, len(st)))
