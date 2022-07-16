# Data-Structure-and-Algorithms

Data Structure and Algorithms Implementation with different languages

<!-- ## Started CP: `12/05/2021` -->

## Notes

- Language
  - `int` capacity: `-2 * 10^9` to `2 * 10^9`
  - `long long int` capacity: `-9 * 10^18` to `9 * 10^18`
  - Global Array Size: `10^7`
  - Local Array Size: `10^5`
  - `typeid` operator in c++
- OJ Time Limits
  - Number of iterations in 1 second is : `10^7 to 10^8`
  - `10^8` operation -> `1second`
  - `10^9 -> 10 seconds`
  - `10^10` operation -> `10^10/10^8` or `100seconds`
  - `10^11 -> 1000 seconds`
- Number Theory
  - `log(a^b) = b log(a)`
  - `n << k` -> `n * 2^k`
  - `n >> k` -> `n / 2^k`
  - 2'complement of `~N` = `-((~(~N))+1)` = `-(N+1)`
  - positive integers: `>= 1` and non-negative integers: `>=0`
  - `log6(x) = log_e(x) / log_e(6)`
  - xor Trick
    ```c++
    x ^ 0 == x
    x ^ y == 0 // x == y
    x ^ y == y ^ x
    a ^ b == c ^ d;
    a ^ b ^ b == c ^ d ^ b;
    a = c ^ d ^ b;
    ```
    ```c++
       a ^ b ^ c ^ a ^ b     # Commutativity
     = a ^ a ^ b ^ b ^ c     # Using x ^ x = 0
     = 0 ^ 0 ^ c             # Using x ^ 0 = x (and commutativity)
     = c
    ```
    ```c++
    // swap two number
    x = x ^ y; // =>                      (x ^ y, y)
    y = x ^ y; // => (x ^ y, x ^ y ^ y) = (x ^ y, x)
    x = x ^ y; // => (x ^ y ^ x, x)     = (y, x)
    ```

# Path

## Complexity

- [x] Time complexity
- [x] Space complexity
- [x] O(1)
- [x] O(n)
- [x] O(n^2)
- [x] O(n^3)
- [x] O(sqrt(n))
- [x] O(log(n))
- [x] Logarithm

## Recursion

## Cpp STL

- [x] pair
- [x] vector
- [x] iterator
- [x] string, stringstream
- [x] map, unordered_map
- [x] set, unordered_set, multiset
- [x] bitset
- [x] math.h
- [x] algorithms
- [x] stack
- [x] queue, deque, priority_queue

## Sorting

- [x] Selection Sort
- [x] Bubble Sort
- [x] Insertion Sort
- [x] Counting Sort
- [x] Merge Sort
- [x] Lexicographical Sorting
- [x] std::sort()
- [x] Comparator Function
- Quick Sort

## Searching:

- [x] Linear Search
- [x] Binary Search
- [x] Lower Bound
- [x] Upper Bound
- [x] Peak Element
- [x] First Last Occurrence
- [x] Rotated Array
- [x] Max in a Hill
- [x] Square Root

## Number theory

- [x] Base Conversion
- [x] Bitwise Operators
- [x] k-th bit on/off and set/unset

## Data Structure

- Stack
- Queue, Circular Queue
- Linked List
- Disjoint sets

## Greedy:

## Dynamic programming:

- Fibonacci, Shortest path, LIS and Path Printing,
- Longest common subsequence, Coin Change / 0-1 Napsack
- Subset Sam, Combinatorics, Decision Problem
- Matrix Chain Multiplication

## Trees:

- Segment Tree 1
- Segment Tree 2
- Binary Indexed Tree

## Graph theory:

- Basic of Graph
- Adjacency matrix
- Adjacency list
- Breadth-first search
- Depth First Search
- Topological Sort
- Dijkstra
- Bellman–Ford
- Floyd Warshall
- Minimum Spanning Tree 1, 2
- Maximum flow 1, 2
- Longest path problem
- Strongly connected component

## String:

- Rabin-karp string matching
- Knuth–Morris–Pratt (KMP)
- Meet in the middle Technique
