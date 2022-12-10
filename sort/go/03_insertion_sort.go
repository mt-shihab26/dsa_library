package main

func InsertionSort(slice []int, less func(a, b int) bool) []int {
	ln := len(slice)
	s := make([]int, ln)
	copy(s, slice)

	for i := 0; i < ln; i++ {
		for j := i; j >= 1 && less(s[j], s[j-1]); j-- {
			s[j], s[j-1] = s[j-1], s[j]
		}
	}

	return s
}
