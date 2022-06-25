# Searching

# Binary search

## Notes

- বাইনারি সার্চ অ্যালগরিদম (কম্পিউটার প্রোগ্রামিং ৩য় খণ্ড বই):
  ```
  ইনপুট: একটি অ্যারে A এবং একটি উপাদান x।
  আউটপুট: অ্যারের ইনডেক্স i, যেখানে সেই উপাদানটি খুঁজে পাওয়া গিয়েছে। খুঁজে না পেলে i-এর মান হবে -1.
  ধাপ 1: ধরি, A-এর উপাদান সংখ্যা হচ্ছে n।
  ধাপ 2: left = 0 ও right = n-1 নেই। আমরা অ্যারের left থেকে right ইনডেক্স পর্যন্ত সংখ্যাগুলোর মধ্যে উপাদানটি খুঁজব। left ও right-এর মান সমান হলে বুঝব অ্যারেতে একটিমাত্র উপাদান আছে। আর left যদি right-এর চেয়ে বড় হয়, তার মানে অ্যারেতে আর কোন উপাদান নেই বা থাকা সম্ভব নয়।
  ধাপ 3: যদি left > ritght হয়, তাহলে ধাপ 8 (আট)-এ যাই।
  ধাপ 4: mid = (left + right) / 2 নেই। mid হচ্ছে left ও right-এর মাঝামাঝি ইনডেক্স।
  ধাপ 5: A[mid] == x হলে, mid রিটার্ন করি। (ফলাফল: কাঙ্ক্ষিত উপাদানটি অবস্থান খুঁজে পাওয়া গিয়েছে।
  ধাপ 6: A[mid] < x হলে, left = mid + 1 নেই। তারপরে ধাপ 3-এ যাই।
  ধাপ 7: A[mid] > x হলে, right = mid - 1 নেই। তারপর ধাপ 3-এ যাই।
  ধাপ 8: উপাদান খুঁজে পাওয়া যায়নি, তাই -1 রিটার্ন করি।
  ```
- Calculating mid:
  - `mid = (left + right) / 2` or
  - `mid = left + ((right - left) / 2)` this is better
- Luv Tutorials:
  - We binary search in **Monotonic functions**
  - **Search space**

## Complexity

- Time Complexity: `O(log n)`
- Space complexity: `O(1)`

## Watch Videos

- Luv Binary Search Playlist: https://youtube.com/playlist?list=PLauivoElc3gjE_s-7owHO0RVb_jj7Rx85
- [x] [বাইনারি সার্চ - binary search (Tamim Shahriar)](https://youtu.be/NMC6ltspWys)
- [x] [Binary Search & How I write it | Tutorial | CP Course | EP 40 (Luv)](https://youtu.be/egRrgj8JOdY)
- [x] [Implement Upper Bound & Lower Bound with Binary Search | CP Course | EP 41(Luv)](https://youtu.be/gcYvFVZ_LUA)
- [x] [Nth Root of a Number using Binary Search | CP Course | EP 42 (Luv)](https://youtu.be/5snE6xsyheE)
- [ ] [Advanced Binary Search with Predicate Function | SPOJ EKO | CP Course | EP 43 (Luv)](https://youtu.be/JAfJssvFgDI)
- [ ] [Binary Search tutorial (C++ and Python) (Errichto)](https://youtu.be/GU7DpgHINWQ)

## Solve Problems

- LeetCode List: https://leetcode.com/tag/binary-search
- B-S2-(M10+M11): Synapse Beginner Long 9 [Searching]: https://vjudge.net/contest/460870
- LightOJ: Binary Search/Bisection: https://lightoj.com/problems/category/binary-search
- [x] [UVa: 10611 - The Playboy Chimp (Easy)](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552)
- [x] [LeetCode: 1351. Count Negative Numbers in a Sorted Matrix (Easy)](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/)
- [x] [LeetCode: 278. First Bad Version (Easy)](https://leetcode.com/problems/first-bad-version/)
- [x] [LeetCode: 35. Search Insert Position (Easy)](https://leetcode.com/problems/search-insert-position/)
- [x] [LeetCode: 69. Sqrt(x) (Easy)](https://leetcode.com/problems/sqrtx/)
- [x] [UVa: 10474 - Where is the Marble? (Easy)](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415)
- [x] [LightOJ: 1088.Points in Segments (Easy)](https://lightoj.com/problem/points-in-segments)
- [x] [LeetCode: 34. Find First and Last Position of Element in Sorted Array (Medium)](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
- [x] [CodeForces: 817C. Really Big Numbers (\*1600)](https://codeforces.com/problemset/problem/817/C)
- [x] [CodeForces: 1613C. Poisoned Dagger](https://codeforces.com/contest/1613/problem/C)
- [ ] [SpOJ: EKO.Eko](https://www.spoj.com/problems/EKO/)
- [ ] [SpOJ: AGGRCOW - Aggressive cows](https://www.spoj.com/problems/AGGRCOW/)
- [ ] [SpOJ: PIE.Pie](https://www.spoj.com/problems/PIE/)
- [ ] [CodeChef: MINEAT.Minion Chef and Bananas](https://www.codechef.com/problems/MINEAT)
- [ ] [CodeForces: 230.T-primes](https://codeforces.com/problemset/problem/230/B)
- [ ] [CodeForces: 474.Worms](https://codeforces.com/problemset/problem/474/B)
- [ ] [InterviewBit: Painter's Partition Problem](https://www.interviewbit.com/problems/painters-partition-problem/)
- [ ] [LeetCode: 374. Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)
- [ ] [LeetCode: 1813. Sentence Similarity III](https://leetcode.com/problems/sentence-similarity-iii/)
- [ ] [LeetCode: 957. Prison Cells After N Days](https://leetcode.com/problems/prison-cells-after-n-days/)
- [ ] [LeetCode: 367. Valid Perfect Square (Easy)](https://leetcode.com/problems/valid-perfect-square/)
