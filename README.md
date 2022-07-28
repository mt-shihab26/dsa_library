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
  - Bits
    - `log(a^b) = b log(a)`
    - `n << k` -> `n * 2^k`
    - `n >> k` -> `n / 2^k`
    - 2'complement of `~N` = `-((~(~N))+1)` = `-(N+1)`
    - positive integers: `>= 1` and non-negative integers: `>=0`
    - `log6(x) = log_e(x) / log_e(6)`
    - builtin functions
      - `__builtin_popcount(x)`
      - `__builtin_clz(x)`
      - `__builtin_ctz(x)`
    - xor Trick
      - `n ^ (n + 1) == 1 // if n is even`
      - `x ^ 0 == x`
      - `x ^ y == 0 // x == y`
      - `x ^ x ^ x = x // len even`
      - `x ^ x ^ x ^ x = 0 // len odd`
    - BIT LOW: Think about each bit separately. That's it. It will make your life real comfy.
    - The complexity of bitwise operations in bitset of size is O(size/32) or O(size/64)

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

- [x] print 1 to n
- [x] print n to 1
- [x] sum of array
- [x] sum of n number
- [x] digit sum
- [x] fibonacci
- [x] gcd with recursion
- [x] calculate x of the power y
- [x] reverse string

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

- [x] selection sort
- [x] bubble sort
- [x] insertion sort
- [x] counting sort
- [x] merge sort
- [x] lexicographical sorting
- [x] std::sort()
- [x] comparator function
- quick sort

## Searching

- [x] linear search
- [x] binary search
- [x] lower bound
- [x] upper bound
- [x] peak element
- [x] first last occurrence
- [x] rotated array
- [x] max in a hill
- [x] square root

## Primes and Divisors

- [x] divisors
- [x] gcd lcm
- [x] primality test
- [x] prime factors
- [x] sieve of eratosthenes
- [x] string multiplication

## Binary Numbers

- [x] base conversion
- [x] bitwise operators
- [x] k-th bit on/off and set/unset
- [x] bit masking
- [x] builtin functions
- [x] xor trick
- [x] bitset
- [x] contribution technique

## Modular Arithmetic

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
