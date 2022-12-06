package main

import (
	"fmt"

	utils "github.com/shh26b/utils/go"
)

func main() {
	s := utils.Randoms(20, 1, 100)
	fmt.Print("normal(s): \t", s, "\n\n")

	r := selectionSort(s, func(x, y int) bool { return x < y })
	fmt.Print("selection(r): \t", r, "\n")
	fmt.Print("selection(s): \t", s, "\n\n")

	r2 := bubbleSort(s, func(x, y int) bool { return x < y })
	fmt.Print("bubble(r2): \t", r2, )
	fmt.Print("bubble(s): \t", s, "\n\n")

}
