package main

func BubbleSort(slice []int, fn cmp) []int {
	ln := len(slice)
	s := make([]int, ln)
	copy(s, slice)
	for i := 0; i < ln; i++ {
		for j := 0; j < ln; j++ {
			if fn(s[i], s[j]) {
				s[i], s[j] = s[j], s[i]
			}
		}
	}
	return s
}
