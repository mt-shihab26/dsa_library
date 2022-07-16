# Cpp STL

## Topics

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

## Notes

### Pair

```cpp
pair<int,int> p; // a pair of 2 ints
pair<int,string> p; // a pair of an int and a string
pair<int,pair<int,string>> p; // a pair of int and (pair of int and string)
pair<vector<int>,string> p; // a pair of a (vector of int) and a string Access elements using .first and .second
pair<string,int> p = {“hello”,6};
cout << p.first << “ “ << p.second; // prints: hello 6
```

### vector

```cpp
// Constructors
vector<int> v; // empty vector of integers
vector<int> v(10); // vector of integers with 10 elements (all 0)
vector<char> v(10,’h’); // vector of chars with 10 elements (all ‘h’)

// Functions:
v.push_back(x); //insert the value x to the end of the vector. O(1)
v.pop_back(); // erase the last element. O(1)
v.clear(); // erase all elements. O(n)
v.size(); // returns the current size of the vector. O(1)

// Operators:
v[] // operator - can be used to access elements like an array. O(1)
```

### Iterator

```cpp
// NOTE: v.end() is the iterator to a non-existent element (after the last element)
// These behave a lot like pointers.
vector<int> v = {10, 15, 12, 5, 20}; | int a[5] = {10, 15, 12, 5, 20};
vector<int>::iterator it = v.begin(); | int *p = a;
// OR auto it = v.begin();
cout << *it; // 10 | cout << *p; // 10
// it++; | p++;
cout << *it; // 15 | cout << *p; // 15
// it--; | p--;
cout << *it; // 10 | cout << *p; // 10
cout << *(it + 3); // 5 | cout << *(p + 3); // 5

// Iterating Containers
for(auto it = s.begin(); it != s.end(); it++){
    // *it
}
// This works for all three: set, map and vector

// Shorthand:

vector<int> v;
for(int x:v){
     // x
}

set<int> s;
for(int x:s){
// x
}

map<int,int> m;
for(pair<int,int> x:v){
// x.first, x.second
}
```

### string

- Global Array Size: `10^7`
- Local Array Size: `10^5`

### map

```cpp
// Very common use-case: Count frequency of various objects
// You can think of these as special arrays in which the indices(keys) of elements can be negative or very big or even strings! These are like python-dictionaries. (In Java same behavior is shown by TreeMap).
map<key_datatype, value_datatype> m;`
map<string, int> m;` // defines a map in which the keys of elements are strings
// Now we can use it like:
m["hello"] = 50;`
m["world"] = 12;`
cout << m["hello"] << " " << m["world"];` // 50 12
map<int,int> m;`
m[-234] = 49;` // negative ints are also valid as keys
// NOTE: Maps are very similar to sets, in sets the values are unique and sorted, in maps, the keys are unique and sorted
m.clear()` - Clears a map
m[key]` - value of element with key. O(logN)
m.count(key), m.find(key), m.erase(key)`,
m.lower_bound(key), m.upper_bound(key)` - similar to set
// Map Iterators behave similar to set iterators, but upon doing *it you instead of getting the value, you get a pair of {key, value}
// Examples:
    map<string, double> m;
    // insert values in map
    auto it = m.find("utkarsh");
    pair<string, double> p = *it; // {"utkarsh", m["utkarsh] }
```

### set

- Set is a container which keeps a unique copy of every element in sorted order.
- (In Java same behavior is shown by TreeSet).
- `set<int> s;` // empty set of integers
- `set<string> s;` // empty set of strings
- Important Functions:
  - `s.insert(x)` - insert the value x into set, do nothing if already present. O(log N)
  - `s.erase(x)` - erase the value x from set if present. O(log N)
  - `s.count(x)` - returns 0 if x is not in set and 1 if x is in set. O(log N)
  - `s.clear()` - erase all elements. O(n)
  - `s.size()` - returns the current size of the set. O(1)
- WRONG: `cout << s[0];` // [] operator doesn’t work with set
- Set Iterators
  - Set iterators offer less features than vector iterators.
  - `auto it = s.begin();` // it is the iterator to the first element
  - `it++`, `it--`, `++it`, `--it` -> These are all valid and work in O(logN) time
  - Functions related to set iterators:
    - `s.find(x)`: returns iterator to element with value x. Returns s.end() if not found. O(logN)
    - `s.lower_bound(x)`: returns iterator to the first element which is >= x. Returns s.end() if not found. O(logN)
    - `s.upper_bound(x)`: returns iterator to the first element which is > x. Returns s.end() if not found. O(logN)
    - `s.erase(it)`: erases the element with iterator it. O(logN)
  - Both of the next 2 lines are exactly same.
    - `if(s.find(10) == s.end()) cout << “Not Found”;`
    - `if(s.count(10) == 0) cout << “Not Found”;`

## Watch Videos

- [x] [C++ Basics for Competitive Programming - C++ Basics - 1 (Luv)](https://youtu.be/lHJcLLsre70)
- [x] [Overflow, Precision Errors, Calculation Order - C++ Basics - 2](https://youtu.be/9S-b52CSCbQ)
- [x] [Conditions, Loops, Jump Statements and Questions - C++ Basics - 3 (Luv)](https://youtu.be/AxB78suyqr8)
- [x] [C++ Strings, Getline and Big Numbers for Competitive Programming - C++ Basics - 4 (Luv)](https://youtu.be/abZEVCRYZP8)
- [x] [Arrays and Size Limits for Local & Global Arrays - C++ Basics - 5 (Luv)](https://youtu.be/EEEa0u0ZQio)
- [x] [Functions, C++ references and CONTEST ALERT Information - C++ Basics - 6 (Luv)](https://youtu.be/cMTFGOmYT9E)
- [x] [Pointers in Deep and Easiest Way (Luv)](https://youtu.be/v_qm2Sce7as)
- [x] [C++ STL | Competitive Programming (Luv)](https://www.youtube.com/playlist?list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn)
- [x] [C++ STL: The ONLY Video You Need | Compulsory for DSA/CP (Utkarsh Gupta)](https://youtu.be/PZogbfU4X5E)
- [x] [Arrays and Size Limits for Local & Global Arrays | C++ Basics 5 (Luv)](https://youtu.be/EEEa0u0ZQio)
- [Lambdas in C++ (The Cherno)](https://youtu.be/mWgmBBz0y8c)

## Reading Resources

- [x] [Input & Output (usaco.guide)](https://usaco.guide/general/input-output?lang=cpp)
- [x] [Scanf and non-standard input format [Tutorial for beginners] (codeforces/RNR)](https://codeforces.com/blog/entry/56932)
- [x] [Reading from text file until EOF repeats last line [duplicate] (stackoverflow.com)](https://stackoverflow.com/questions/21647/reading-from-text-file-until-eof-repeats-last-line)
- [x] [Yet again on C++ input/output (codeforces/andreyv)](https://codeforces.com/blog/entry/5217)
- [x] [C Programming Strings (programiz.com)](https://www.programiz.com/c-programming/c-strings)
- [x] [C - Strings (tutorialspoint.com)](http://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [কম্পিউটার প্রোগ্রামিং বই (তামিম শাহরিয়ার সুবিন)](http://cpbook.subeen.com)
- [ASCII Table (cs.cmu.edu)](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html)
- [Operators Precedence in C++ (tutorialspoint.com)](https://www.tutorialspoint.com/Operators-Precedence-in-Cplusplus)
- [Why is return 0 optional? (stackoverflow.com)](<https://stackoverflow.com/questions/4138649/why-is-return-0-optional#:~:text=In%20essence%20it%20says%20that%20if%20you%20quit%20the%20function%20without%20returning%20a%20value%20this%20is%20equivalent%20as%20if%20you%20had%20given%20a%20return%20value%20of%200.%20This%20is%20special%20to%20main%2C%20doing%20so%20with%20other%20functions%20where%20the%20calling%20function%20expects%20a%20return%20value%20might%20(and%20will)%20crash%20your%20program.>)
- [C++ Operators (programiz.com)](httpprogramiz.coms://www./cpp-programming/operators)
- [C++ Operator Precedence (en.cppreference.com)](https://en.cppreference.com/w/cpp/language/operator_precedence)
- [C++ Data Types (geeksforgeeks.org)](https://www.geeksforgeeks.org/c-data-types/)
- [End of File in C++ (stackoverflow.com)](https://stackoverflow.com/questions/1494342/end-of-file-in-c)
- [কেন আমি প্রোগ্রামিং শিখবো? (shafaetsplanet.com)](http://www.shafaetsplanet.com/?p=1437)
- [কম্পিউটার বিজ্ঞান (shafaetsplanet.com)](http://www.shafaetsplanet.com/?p=1639)
- [LeetCode Explore - Introduction to Data Structure Arrays 101 (leetcode.com)](https://leetcode.com/explore/learn/card/fun-with-arrays/)

## Solve Problems

- [x] [LeetCode: 485. Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/)
- [x] [LeetCode: 1295. Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/)
- [x] [LeetCode: 977. Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)
- [x] [LeetCode: 1089. Duplicate Zeros (Easy)](https://leetcode.com/problems/duplicate-zeros/)
- [x] [LeetCode: 88. Merge Sorted Array (Easy)](https://leetcode.com/problems/merge-sorted-array)
- [x] [HackerRank: Say "Hello, World!" With C++ (Easy)](https://www.hackerrank.com/challenges/cpp-hello-world)
- [x] [UVa 10055 - Hashmat the Brave Warrior](https://vjudge.net/problem/UVA-10055/origin)
- [x] [UVa 11854 - Egypt](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2954)
- [x] [UVA 573 - The Snail](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=514)
- [x] [UVa 575 - Skew Binary](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=516)
- [x] [UVa 10945 - Mother bear](https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1886)
- [x] [UVa 11150 - Cola](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2091)
- [x] [UVa 100 - The 3n + 1 problem](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=36)
- [x] [UVa 272 - TEX Quotes](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=208)
- [x] [CodeMarshal: F. Making Palindrome](https://algo.codemarshal.org/contests/diu-takeoff-summer2016/problems/F)
- [x] [GeeksForGeeks: Anagram Palindrome (Basic)](https://practice.geeksforgeeks.org/problems/anagram-palindrome4720/1)
- [x] [GeeksForGeeks: Anagram (Easy)](https://practice.geeksforgeeks.org/problems/anagram-1587115620/1)
- [x] [GeeksForGeeks: Check for subsequence (Basic)](https://practice.geeksforgeeks.org/problems/check-for-subsequence4930/1)
- [CodeForces: 1204B. Mislove Has Lost an Array (\*900)](https://codeforces.com/problemset/problem/1204/B)
