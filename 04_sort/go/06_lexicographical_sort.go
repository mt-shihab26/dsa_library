package main

func sort2(slice []string, less func(a, b string) bool) []string {
	ln := len(slice)
	s := make([]string, ln)
	copy(s, slice)

	for i := 0; i < ln; i++ {
		for j := i; j >= 1 && less(s[j], s[j-1]); j-- {
			s[j], s[j-1] = s[j-1], s[j]
		}
	}
	return s
}

func min(l, l2 int) int {
	if l < l2 {
		return l
	}
	return l2
}

func LexicographicalSort(slice []string) []string {
	return sort2(slice, func(a, b string) bool {
		lnA, lnB := len(a), len(b)
		ln := min(lnA, lnB)
		for i := 0; i < ln; i++ {
			if a[i] == b[i] {
				continue
			} else {
				return a[i] < b[i]
			}
		}
		return lnA < lnB
	})
}
