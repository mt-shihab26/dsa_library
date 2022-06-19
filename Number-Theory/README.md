# Number Theory

## Topics

- Number Theory
  - [x] Divisors
  - [x] Primality test
  - [x] Prime Factors
  - [x] Sieve-of-Eratosthenes
  - [x] String-Multiplication
- Modular Arithmetic
  - [x] Addition, Subtraction and Multiplication modulo formula
  - [x] BigMod
  - Inserve Module
  - Multiplicative Inserse
  - Extened Euclid
- Binary Numbers
  - [x] Base Conversion
  - [x] Arithmetic Operation in Any Base
  - [x] Signed vs Unsigned binary numbers
  - [x] Set, Unset, Toggle a Bit and Bit Count
  - [x] Bit Manipulation Ticks
  - [x] XOR Operation

## Notes

- Bitwise Operators
  ```
  &   -> bitwise and
  |   -> bitwise or
  ^   -> bitwise xor
  ~   -> bitwise not
  >>  -> bitwise right shift
  <<  -> bitwise left shift
  ```
- Modular Arithmetic
  ```
  (a + b) % m = ((a % m) + (b % m)) % m
  ```
  ```
  (a - b) % m = ((a % m) - (b % m) + m) % m
  ```
  ```
  (a * b) % m = ((a % m) * (b % m)) % m
  ```
  ```
  (a / b) % m = ((a % m) * ((b^-1) % m)) % m
  b^-1 -> Multiplicative Inserse
  ```
  - Inserve Module
  ```
  (a / b) % m =
          if m is prime:
              ((a % m) * bigmod(b, m - 2, m)) % m
          else:
              Extened Euclid's Algorithm
  ```
- Binary Numbers
  ```
  Oth Bit -> Least Singnificant Bit (LSB)
  Nth bit(in N Bit no.) -> Most Singnificant Bit (MSB)
  ```
  ```
  Set -> 1
  Unset -> 0
  ```
  ```
  (1000)2 - (1)10 = (111)2
  ```
  ```c++
  __builtin_popcount()
  __builtin_popcountll()
  ```
  ```c++
  // XOR Operation
  1 0 ---> 1
  0 1 ---> 1
  1 1 ---> 0
  0 0 ---> 0

  101 ^ 101 ---> 000
  x ^ x ---> 0;

  101 ^ 000 ---> 101
  x ^ 0 ---> 0;

  x ^ y ^ z == y ^ z ^ x == z ^ y ^ x;
  ```
  ```
      c ^ a ^ b ^ c ^ b
  --> a ^ b ^ b ^ c ^ c
  --> a ^ 0 ^ 0
  --> a
  ```

## Solve Problems

- [x] [TimusOJ: 1086. Cryptography (beginners)](https://acm.timus.ru/problem.aspx?space=1&num=1086)
- [x] [UVa: 294 - Divisors (Easy)](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=230)
- [x] [UVa: 160 - Factors and Factorials](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=96)
- [x] [UVa: 583 - Prime Factors](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=524)
- [x] [UVa: 10789 - Prime Frequency](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1730)
- [x] [UVa: 10680 - LCM](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1621)
- [x] [UVa: 10127 - Ones](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1068)
- [x] [UVa: 374 - Big Mod](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=310)
- [x] [LeetCode: 43. Multiply Strings (Medium)](https://leetcode.com/problems/multiply-strings/)
- [x] [CodeForces: 1178C. Tiles (\*1300)](https://codeforces.com/contest/1178/problem/C)
- [x] [LeetCode: 67. Add Binary (Easy)](https://leetcode.com/problems/add-binary)
- [UVa: 10858 - Unique Factorization](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1799)
- [UVa: 10139 - Factovisors](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1080)
- [UVa: 10856 - Recover Factorial](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1797)
- [UVa: 10299 - Relatives](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1240)
- [CodeForces: 1281C.Cut and Paste](https://codeforces.com/problemset/problem/1281/C)
- [CodeForces: 300C.Beautiful Numbers](https://codeforces.com/problemset/problem/300/C)
- [CodeForces: 1248C.Ivan the Fool and the Probability Theory](https://codeforces.com/problemset/problem/1248/C)
- [CodeForces: 935D.Fafa and Ancient Alphabet](https://codeforces.com/problemset/problem/935/D)
- [CodeForces: 1279D.Santa's Bot](https://codeforces.com/problemset/problem/1279/D)
- [SpOJ: OPMODULO - "Operation - Modulo"](https://www.spoj.com/problems/OPMODULO/)
- [CodeChef: GCDQ - Gcd Queries](https://www.codechef.com/problems/GCDQ)
- [TimusOJ: 1005. Stone Pile](https://acm.timus.ru/problem.aspx?space=1&num=1005)
- [Count the number of integer X such that L<= X <= R and gcd(X,N) = 1.](https://youtu.be/DTXvtKf3X_E?t=2600)
- [Light OJ 1007 – Mathematically Hard](https://youtu.be/DTXvtKf3X_E?t=3209)
- [Toph – Life of Phi](https://youtu.be/DTXvtKf3X_E?t=3629)
- [ICPC 2019 Preli G – Pairs Forming GCD](https://youtu.be/DTXvtKf3X_E?t=4537) ([Accepted Code with explanation](https://turing13.com/2020/07/16/icpc-2019-preli-g-pairs-forming-gcd/))
- [How many numbers from 1 to N are divisible by 2 or 3.](https://youtu.be/DTXvtKf3X_E?t=8260)
- [How many numbers in range {1,…, N} is not divisible by 2, 3, or 5.](https://youtu.be/DTXvtKf3X_E?t=8508)
- [Light OJ 1117 – Helping Cicada](https://youtu.be/DTXvtKf3X_E?t=8875)
- [Light OJ 1144 – Ray Gun](https://youtu.be/DTXvtKf3X_E?t=9026)
- [SPOJ – SQFREE – Square-free integers](https://youtu.be/DTXvtKf3X_E?t=10653)
- [Light OJ 1161 – Extreme GCD](https://youtu.be/DTXvtKf3X_E?t=11066)
- [Number Theory Contest 01](https://vjudge.net/contest/381131)
- [Number Theory Contest 02](https://vjudge.net/contest/381132)
- [Number theory practice problems (CodeForces Blog)](https://codeforces.com/blog/entry/49494)

## Watch Videos

- [x] [Number Theory (Synapse)](https://youtu.be/kr0cL7nOauc)
- [x] [Modular Arithmetic (Synapse)](https://youtu.be/RsWquJtpn0E)
- [x] [Why Print answer modulo 10^9+7 | Modular Arithmetic | EP 11 (Luv)](https://youtu.be/RCq5TYMZEwg)
- [x] [Binary Numbers and Bits Basics For Competitive Programming | EP 47 (Luv)](https://youtu.be/DYwhXwGj1L4)
- [x] [সংখ্যা পদ্ধতি | তৃতীয় অধ্যায় (১ম খন্ড) | HSC ICT (wrong submission)](https://youtube.com/playlist?list=PL0G2Ga9ALv6lrpxwuG2KE73ohn4K8GatJ)
- [x] [PLAYING WITH BITS | Set, Unset, Count Bits | CP Course | EP 48 (Luv)](https://youtu.be/yEa0vkjJSf0)
- [x] [6 Amazing BIT Manipulation Ticks You must Know | CP Course | EP 49 (Luv)](https://youtu.be/XjtYsFjXtoE)
- [x] [Power of XOR Operator | CP Course | EP 50 (Luv)](https://youtu.be/SFOlkUnjtA4)
- [Number theory (Luv)](https://youtube.com/playlist?list=PLauivoElc3giVROwL-6g9hO-LlSen_NaV)
- [Number Theory - Beginner (BACS-BUBT National Programming Camp, 2017)](https://youtu.be/gk2MUZc8jTM)
- [Number Theory and Inclusion-Exclusion Part 1 (Tanmoy Datta)](https://youtu.be/tDzHLd3UCo0)
- [Number Theory and Inclusion-Exclusion Part 2 (Tanmoy Datta)](https://youtu.be/DTXvtKf3X_E)
- [Maths for DSA/CP : All You Need To Know (Utkarsh Gupta)](https://youtu.be/tDM6lT-qjys?t=110)

## Reading Resouces

- [x] [Find all divisors of a natural number in O(sqrt(n)) (geeksforgeeks.org)](https://www.geeksforgeeks.org/find-all-divisors-of-a-natural-number-set-2/)
- [x] [Primality Test in O(sqrt(n))](https://www.learndsa.com/2020/07/introduction-to-prime-numbers-and-primality-test-in-sqrt-n-time-complexity.html)
- [Program to find GCD or HCF of two numbers (geeksforgeeks.org)](https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/)
- [Sieve of Eratosthenes (cp-algorithms.com)](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html)
- [Number Theory Topic (Tanmoy Datta)](https://docs.google.com/document/d/1NsGMyQSxa9xU-MrLQRcU1NYEZLDNm3xEeirqq5b-Liw/edit?usp=sharing) Slides
- [Number Theory Part-2 From medium to advanced Slides (Tanmoy Datta)](https://docs.google.com/presentation/d/1Svz9YBCYZqXUCWZ-lpHSu0itkPiN7q5IEI-wMGjwX7w/edit?usp=sharing) Slides
- [Samiul Bhai Blog](https://forthright48.com/p-cpps-101/)
- [Number Theory in Competitive Programming](https://artofproblemsolving.com/community/c90633h1291397)
- [What important topics of number theory should every programmer know?](https://www.quora.com/Number-Theory/What-important-topics-of-number-theory-should-every-programmer-know)
- [GCD](https://forthright48.com/euclidean-algorithm/) and [LCM](https://forthright48.com/lowest-common-multiple-of-two-number/)
- [Modular Arithmetic](https://forthright48.com/introduction-to-modular-arithmetic/) and [Modular Exponentiation (BigMod)](https://forthright48.com/modular-exponentiation/)
- [Modular Multiplicative Inverse](https://forthright48.com/modular-multiplicative-inverse/)
- [Prime Factorization of Factorial](https://forthright48.com/prime-factorization-of-factorial/)
- [Number of Digits of Factorial](https://forthright48.com/number-of-digits-of-factorial/)
- [Number of Trailing Zeroes of Factorial](https://forthright48.com/number-of-trailing-zeroes-of-factorial/)
- [K leading Digits of Factorial](https://forthright48.com/leading-digits-of-factorial/)
- [How to approach a programming problem?](https://youtu.be/DTXvtKf3X_E?t=3497)
- [Euler totient or phi function and it’s proof](https://forthright48.com/euler-totient-or-phi-function)
- [Useful properties of Euler totient function](https://youtu.be/DTXvtKf3X_E?t=2109)
- [Multiplicative function](https://forthright48.com/multiplicative-function/)
- [Euler phi and divisor sum theorem](https://forthright48.com/euler-phi-extension-and-divisor-sum/)
- [Sum of co-prime numbers of a number N](https://forthright48.com/sum-of-coprime-numbers-of-integer/)
- [Euler’s theorem and Fermat’s Little theorem](https://forthright48.com/eulers-theorem-and-fermats-little-theorem/)
- [Extended Euclidean algorithm](https://forthright48.com/extended-euclidean-algorithm/)
- [Linear diophantine equation and its solution](https://forthright48.com/linear-diophantine-equation/)
- [Inclusion-Exclusion principles](https://cp-algorithms.com/combinatorics/inclusion-exclusion.html)
- [Mobius Function](https://brilliant.org/wiki/mobius-function/)
- [How to calculate sum of LCM(1,n) + LCM(2,n) + .. + LCM(n,n)?](https://forthright48.com/spoj-lcmsum-lcm-sum)
- [How to calculate sum of GCD(1,n) + GCD(2,n) + .. +GCD(n,n)?](https://forthright48.com/gcd-sum-function/)
- [Chinese Remainder Theorem(CRT)](https://forthright48.com/chinese-remainder-theorem-part-1-coprime-moduli/)
- [Chinese Remainder Theorem when Modular values are not co-prime.](https://forthright48.com/chinese-remainder-theorem-part-2-non-coprime-moduli/)
- https://usaco.guide/gold/modular?lang=cpp
- https://discuss.codechef.com/t/guide-to-modular-arithmetic-plus-tricks-codechef-edition-there-is-no-other-edition/67424
- https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/
- https://cp-algorithms.com/algebra/module-inverse.html
- https://www.shawonruet.com/2017/06/blog-post.html
- https://www.shafaetsplanet.com/?p=936
- https://codeforces.com/blog/entry/72527
