package main

import "fmt"

func linearSearch(slice []int, target int) int {
	for i, v := range slice {
		if v == target {
			return i
		}
	}
	return -1
}

func main() {
	s := []int{1, 2, 3, 4, 5}

	i := linearSearch(s, 4)
	fmt.Println(i) // 3

	i = linearSearch(s, 55)
	fmt.Println(i) // -1
}
