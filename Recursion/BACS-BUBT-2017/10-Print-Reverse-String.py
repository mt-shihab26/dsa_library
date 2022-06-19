def reverse(st: str, n: int) -> None:
    if n == 0: return
    print(st[n-1], end="")
    reverse(st, n-1)


st = input()

reverse(st, len(st))
