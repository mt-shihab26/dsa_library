package main

import "fmt"

func Divisors(n int) []int {
	d := []int{}
	for i := 1; i*i <= n; i++ {
		if n%i == 0 {
			d = append(d, i)
			if n/i != i {
				d = append(d, n/i)
			}
		}
	}
	return d
}

func main() {
	d := Divisors(12)
	fmt.Println(d)
}
