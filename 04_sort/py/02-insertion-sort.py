def insertion_sort(a: list) -> list:
    a, n = a.copy(), len(a)
    for i in range(1, n):
        for j in range(i, 0, -1):
            if a[j-1] <= a[j]:
                break
            a[j-1], a[j] = a[j], a[j-1]
    return a


if __name__ == "__main__":
    from random import randint
    nums = [randint(1, 50) for _ in range(10)]
    print(nums)
    print(insertion_sort(nums))
    print(nums)
