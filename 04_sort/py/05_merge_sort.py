def merge_sort(a: list, first: int, last: int) -> None:
    "Sort Given a list of elements with O(n*log(n)) complexity with Merge Sort Algorithm"

    if last == first:
        return

    mid = first + ((last - first) // 2)
    merge_sort(a, first, mid)
    merge_sort(a, mid+1, last)

    len = last - first + 1
    sort_list = []
    j, k = first, mid+1
    for _ in range(len):
        if j > mid:
            sort_list.append(a[k])
            k += 1
        elif k > last:
            sort_list.append(a[j])
            j += 1
        elif a[j] < a[k]:
            sort_list.append(a[j])
            j += 1
        else:
            sort_list.append(a[k])
            k += 1

    j = first
    for i in sort_list:
        a[j] = i
        j += 1


if __name__ == "__main__":
    ele = [25, 35, 50, 42, 3, 42, 27, 44, 38, 25]
    # 3 25 25 27 35 38 42 42 44 50
    merge_sort(ele, 0, len(ele)-1)
    print(ele)
    print(help(merge_sort))
