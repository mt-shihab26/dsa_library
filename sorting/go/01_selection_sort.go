package main

func selectionSort(slice []int, fn func(x, y int) bool) []int {
	ln := len(slice)
	s := make([]int, ln)
	copy(s, slice)
	for i := 0; i < ln; i++ {
		mx, mxI := s[i], i
		for j := i + 1; j < ln; j++ {
			if fn(s[j], mx) {
				mx = s[j]
				mxI = j
			}
		}
		s[i], s[mxI] = s[mxI], s[i]
	}
	return s
}
