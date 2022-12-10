package main

func sort(s []int, l, h int, less func(a, b int) bool) {
	if l == h {
		return
	}
	md := l + (h-l)/2

	sort(s, l, md, less)
	sort(s, md+1, h, less)

	ln, k, m := h-l+1, l, md+1
	a := make([]int, ln)
	for i := 0; i < ln; i++ {
		if k > md {
			a[i] = s[m]
			m++
		} else if m > h {
			a[i] = s[k]
			k++
		} else if less(s[k], s[m]) {
			a[i] = s[k]
			k++
		} else {
			a[i] = s[m]
			m++
		}
	}
	for i, j := 0, l; i < ln; i, j = i+1, j+1 {
		s[j] = a[i]
	}
}

func MergeSort(slice []int, less func(a, b int) bool) []int {
	ln := len(slice)
	s := make([]int, ln)
	copy(s, slice)
	sort(s, 0, ln-1, less)
	return s
}
