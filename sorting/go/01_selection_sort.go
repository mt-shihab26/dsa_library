package main

import (
	"fmt"
	"math/rand"
	"time"
)

func randoms(amount, start, end int) []int {
	s := make([]int, amount)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < amount; i++ {
		s[i] = (start + rand.Intn(end)) % (end + 1)
	}
	return s
}

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

func main() {
	s := randoms(20, 1, 100)
	fmt.Println(s)

	r := selectionSort(s, func(x, y int) bool { return x < y })
	fmt.Println(r)
	fmt.Println(s)
}
