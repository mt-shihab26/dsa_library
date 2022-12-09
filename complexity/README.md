# Complexity

## Notes

-   Iteration: any statement is one iteration
-   Complexity formula
    -   O(n) + O(n) => O(n)
    -   O(k\*n) => O(n), where k is constant. if k < n
    -   O(3) + O(4) + O(5) + O(10) => O(1)

### Online Judge Time Limits

-   Number of iterations in 1 second is : `10^7 to 10^8`
-   if, 10^7 -> 1 second
-   10^8 -> 10 seconds
-   10^9 -> 100 seconds
-   10^10 -> 1000 seconds
-   10^11 -> 10000 seconds

### Logarithm

A mathematical concept that's widely used in Computer Science and that's defined by the following equation:<br>
log(x) = y if and only if b^y = x <br>
In the context of coding interviews, the logarithm is used to describe the complexity analysis of algorithms, and
its usage always implies a logarithm of base 2. In other words, the logarithm used in the context of coding interviews is defined by the following equation: <br>
log(n) = y if and only if 2^y= n<br>
In plain English, if an algorithm has a logarithmic time complexity (O(log(n)), where n is the size of the
input), then whenever the algorithm's input doubles in size (i.e., whenever n doubles), the number of
operations needed to complete the algorithm only increases by one unit. Conversely, an algorithm with a linear time complexity would see its number of operations double if its input size doubled. <br>
As an example, a linear-time-complexity algorithm with an input of size 1,000 might take roughly 1,000 operations to
complete, whereas a logarithmic-time-complexity algorithm with the same input would take roughly 10 operations to
complete, since 2^10 ~= 1,000

## Watch Videos

-   [x] [টাইম কমপ্লেক্সিটি - ১ | time complexity - 1 (Tamim Shahriar)](https://youtu.be/bfB4YN_4Vyo)
-   [x] [টাইম কমপ্লেক্সিটি - ২ | time complexity - 2 (Tamim Shahriar)](https://youtu.be/aNpBA0SgL0c)
-   [x] [স্পেস কমপ্লেক্সিটি | space complexity (Tamim Shahriar)](https://youtu.be/DC-1dIY2fBE)
-   [x] [Time Complexity Analysis and Constraints (Luv)](https://youtu.be/M0tgJaQAo60)
-   [x] [Logarithm (algoexpert.io)](https://www.algoexpert.io/data-structures)
-   [x] [Big O: How Code Slows as Data Grows (freeCodeCamp.org)](https://youtu.be/Ee0HzlnIYWQ)
-   [ ] [10. Understanding Program Efficiency, Part 1 (MIT OpenCourseWare)](https://youtu.be/o9nW0uBqvEo)
-   [ ] [11. Understanding Program Efficiency, Part 2 (MIT OpenCourseWare)](https://youtu.be/7lQXYl_L28w)
-   [ ] [Big O Notation - Full Course (freeCodeCamp.org)](https://youtu.be/Mo4vesaut8g)

## Reading Resources

-   [x] কম্পিউটার প্রোগ্রামিং ৩য় খণ্ড : ডেটা স্ট্রাকচার ও অ্যালগরিদম পরিচিতি (তামিম শাহরিয়ার সুবিন): অধ্যায় ২ : টাইম ও স্পেস কমপ্লেক্সিটি (Time & Space Complexity)
-   [x] প্রোগ্রামিং কনটেস্ট ডেটা স্ট্রাকচার ও অ্যালগরিদম (মো: মাহবুবুল হাসান): ২.৬ টাইম কমপ্লেক্সিটি (Time Complexity) এবং মেমোরী কমপ্লেক্সিটি (Memory Complexity)
-   [x] [অ্যালগরিদম কমপ্লেক্সিটি(বিগ “O” নোটেশন)(shafaetsplanet.com)](http://www.shafaetsplanet.com/?p=1313)
-   [x] [Big o Cheatsheet - Data structures and Algorithms with thier complexities (hackerearth.com)](https://www.hackerearth.com/practice/notes/big-o-cheatsheet-series-data-structures-and-algorithms-with-thier-complexities-1/)
-   [ ] [Big-O: how code slows as data grows (nedbatchelder.com)](https://nedbatchelder.com/text/slowsgrows.html)
-   [ ] [কমপ্লেক্সিটি ক্লাস(P-NP, টুরিং মেশিন ইত‍্যাদি) (shafaetsplanet.com)](http://www.shafaetsplanet.com/?p=1642)
-   [ ] [Computational complexity section-1 (topcoder.com)](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
-   [ ] [Learning understanding big-O notation (topcoder.com)](https://www.topcoder.com/blog/learning-understanding-big-o-notation/)
