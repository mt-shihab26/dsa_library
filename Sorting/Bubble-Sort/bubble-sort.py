def bubble_sort(a: list):
    """Optimized Bubble sort that return sorted list with O(n^2) complexity"""
    a, n = a.copy(), len(a)
    for _ in range(n):
        is_swap = False
        for i in range(1, n):
            if a[i-1] > a[i]:
                is_swap = True
                a[i-1], a[i] = a[i], a[i-1]
        if is_swap == False:
            break
    return a


if __name__ == "__main__":
    from random import randint
    nums = [randint(0, 50) for _ in range(10)]
    print(nums)
    print(bubble_sort(nums))
    print(nums)
