package main

func InsertionSort(slice []int, fn cmp) []int {
	ln := len(slice)
	s := make([]int, ln)
	copy(s, slice)

	for i := 0; i < ln; i++ {
		for j := i; j >= 1 && fn(s[j], s[j-1]); j-- {
			s[j], s[j-1] = s[j-1], s[j]
		}
	}

	return s
}
