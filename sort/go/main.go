package main

import (
	"fmt"

	utils "github.com/shh26b/utils/go"
)

type cmp func(int, int) bool

func main() {
	s := utils.Randoms(20, 1, 100)
	fmt.Print("normal(s): \t", s, "\n\n")

	r := SelectionSort(s, func(x, y int) bool { return x < y })
	fmt.Print("selection(r): \t", r, "\n")
	fmt.Print("selection(s): \t", s, "\n\n")

	r2 := BubbleSort(s, func(x, y int) bool { return x < y })
	fmt.Print("bubble(r2): \t", r2, "\n")
	fmt.Print("bubble(s): \t", s, "\n\n")

	r3 := InsertionSort(s, func(x, y int) bool { return x < y })
	fmt.Print("insertion(r3): \t", r3, "\n")
	fmt.Print("insertion(s): \t", s, "\n\n")

	r4 := MergeSort(s, func(x, y int) bool { return x < y })
	fmt.Print("merge(r3): \t", r4, "\n")
	fmt.Print("merge(s): \t", s, "\n\n")
}
