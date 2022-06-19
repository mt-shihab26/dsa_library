# Set

## Details
* Set is a container which keeps a unique copy of every element in sorted order.
* (In Java same behaviour is shown by TreeSet).
* `set<int> s;` // empty set of integers
* `set<string> s;` // empty set of strings
* Important Functions:
    * `s.insert(x)` - insert the value x into set, do nothing if already present. O(log N)
    * `s.erase(x)` - erase the value x from set if present. O(log N)
    * `s.count(x)` - returns 0 if x is not in set and 1 if x is in set. O(log N)
    * `s.clear()` - erase all elements. O(n)
    * `s.size()` - returns the current size of the set. O(1)
* WRONG: `cout << s[0];` // [] operator doesn’t work with set
* Set Iterators
    * Set iterators offer less features than vector iterators.
    * `auto it = s.begin();` // it is the iterator to the first element
    * `it++`, `it--`, `++it`, `--it`   ->   These are all valid and work in O(logN) time
    * Functions related to set iterators:
        * `s.find(x)`: returns iterator to element with value x. Returns s.end() if not found. O(logN)
        * `s.lower_bound(x)`: returns iterator to the first element which is >= x. Returns s.end() if not found. O(logN)
        * `s.upper_bound(x)`: returns iterator to the first element which is > x. Returns s.end() if not found. O(logN)
        * `s.erase(it)`: erases the element with iterator it. O(logN)
    * Both of the next 2 lines are exactly same.
        * `if(s.find(10) == s.end()) cout << “Not Found”;`
        * `if(s.count(10) == 0) cout << “Not Found”;`
