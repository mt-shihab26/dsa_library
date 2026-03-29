package main

import "fmt"

type Node[T any] struct {
	data T
	pre  *Node[T]
}

type Stack[T any] struct {
	top *Node[T]
	len int
}

func (s *Stack[T]) Push(e T) {
	node := &Node[T]{e, s.top}
	s.top = node
	s.len++
}

func (s *Stack[T]) Pop() {
	pre := s.top.pre
	s.top = nil
	s.top = pre
	s.len--
}

func (s *Stack[T]) Str() string {
	p := s.top
	str := " }"
	for i := 0; i < s.len; i++ {
		str = fmt.Sprintf("%v %v", p.data, str)
		p = p.pre
	}
	return "{ " + str
}

func (s *Stack[T]) Print() {
	str := s.Str()
	println(str)
}

func (s *Stack[T]) Len() int {
	return s.len
}

func (s *Stack[T]) Top() T {
	return s.top.data
}

func main() {
	st := Stack[int]{}

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
