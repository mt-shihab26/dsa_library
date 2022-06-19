def selection_sort(a: list) -> list:
    """Given a list of element it's return sorted list of O(n^2) complexity"""
    a = a.copy()
    n = len(a)
    for i in range(n):
        mni = i
        for j in range(i+1, n):
            if a[j] < a[mni]:
                mni = j
        a[i], a[mni] = a[mni], a[i]
    return a


if __name__ == "__main__":
    from random import randint
    nums = [randint(1, 10) for _ in range(10)]
    print(nums)
    print(selection_sort(nums))
    print(nums)
