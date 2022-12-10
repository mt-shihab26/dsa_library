package main

import (
	"strconv"
)

type Node struct {
	data int
	pre  *Node
}

type Stack struct {
	top *Node
	len int
}

func (s *Stack) Push(e int) {
	node := &Node{e, s.top}
	s.top = node
	s.len++
}

func (s *Stack) Pop() {
	pre := s.top.pre
	s.top = nil
	s.top = pre
	s.len--
}

func (s *Stack) Str() string {
	p := s.top
	str := " }"
	for i := 0; i < s.len; i++ {
		str = strconv.Itoa(p.data) + " " + str
		p = p.pre
	}
	return "{ " + str
}

func (s *Stack) Print() {
	str := s.Str()
	println(str)
}

func (s *Stack) Len() int {
	return s.len
}

func (s *Stack) Top() int {
	return s.top.data
}

func main() {
	st := Stack{}

	st.Push(10) // 10
	st.Push(20) // 10 20
	st.Push(30) // 10 20 30
	st.Print()  // stdout: 10 20 30

	println(st.Len()) // return: 3

	st.Pop()   // 10 20
	st.Print() // stdout: 10 20

	println(st.Top()) // return: 20

	st.Pop()   // 10
	st.Print() // stdout: 10

	println(st.Top()) // return: 10
}
