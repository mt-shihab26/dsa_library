# Map

## Details
* Very common use-case: Count frequency of various objects
* You can think of these as special arrays in which the indices(keys) of elements can be negative or very big or even strings! These are like python-dictionaries. (In Java same behaviour is shown by TreeMap).
* `map<key_datatype, value_datatype> m;`
* `map<string, int> m;` // defines a map in which the keys of elements are strings
* Now we can use it like:
    * `m[“hello”] = 50;`
    * `m[“world”] = 12;`
    * `cout << m[“hello”] << “ “ << m[“world”];` // 50 12
* `map<int,int> m;`
* `m[-234] = 49;` // negative ints are also valid as keys
* NOTE: Maps are very similar to sets, in sets the values are unique and sorted, in maps, the keys are unique and sorted
* `m.clear()` - Clears a map
* `m[key]` - value of element with key. O(logN)
* `m.count(key), m.find(key), m.erase(key)`,
* `m.lower_bound(key), m.upper_bound(key)` - similar to set
* Map Iterators behave similar to set iterators, but upon doing *it you instead of getting the value, you get a pair of {key, value}
* Examples:
```c++
    map<string, double> m;
    // insert values in map
    auto it = m.find(“utkarsh”);
    pair<string, double> p = *it; // {“utkarsh”, m[“utkarsh] }
```