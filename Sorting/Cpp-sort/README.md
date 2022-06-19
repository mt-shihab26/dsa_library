# gcc sort()

## Details
* This function can be used to sort an array or a vector or a string. The underlying sorting algorithm is called the gcc_sort which is a hybrid algorithm which is implemented in a very efficient way. O(NlogN)
* If you manually write a sorting algorithm, it’ll be slower than this.
* Usage:
    * `int a[n];`->`sort(a, a+n)`
    * `vector<int> v`->`sort(v.begin(), v.end())`;
    * `string s` -> `sort(s.begin(), s.end())`;
* Note: begin() and end() are called iterators, we’ll discuss them later. In short, they’re a little bit similar to pointers.

## Sorting arrays/vectors of Pairs (Very Useful)
* Say we have an array of pairs.
* `pair<int,int> p[5];` // an array of 5 pairs
* `p[0] = {1,2};  p[1] = {5,2};  p[2] = {8,1};  p[3] = {1,0};  p[4] = {3,4}`
* Let’s sort this array:
* sort(p,p+5);
* Now the array looks like:
* [{1,0}, {1,2}, {3,4}, {5,2}, {8,1}]
* Sorting is done in a way that the ordering is done by the “first” element, but wherever the “first” is equal, the ties are broken by comparing second.
* Try this question:
* Given a list of names and scores of students, print the names of students in decreasing order of scores.

## Custom Comparators (Less Commonly Needed)
* You can define your own rule for sorting!
* For example:
    ```c++
    bool decreasing_order(int x, int y){
    return x > y;
    }
    int a[10];
    sort(a, a+10, decreasing_order); // sorts in descending order
    ```
* The comparator with arguments (x,y) should return true IF AND ONLY IF, x is necessarily on the left of y in the sorted array. Read more here.
* Exercise: Define Custom Comparator to sort pairs in increasing order of first and if there are ties, break those in decreasing order of second.
* NOTE: Using Comparator Classes, we can apply custom sorting rules to sets and maps also
