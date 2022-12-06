package utils

import (
	"math/rand"
	"time"
)

func Random(start, end int) int {
	rand.Seed(time.Now().UnixNano())
	return (start + rand.Intn(end)) % (end + 1)
}

func Randoms(amount, start, end int) []int {
	s := make([]int, amount)
	for i := 0; i < amount; i++ {
		s[i] = Random(start, end)
	}
	return s
}
