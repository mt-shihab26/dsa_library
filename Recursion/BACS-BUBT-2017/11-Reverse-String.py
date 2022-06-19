def reverse(st: str, n: int) -> str:
    if n == 0: return ""
    return st[n-1] + reverse(st, n-1)


st = input()
print(reverse(st, len(st)))
