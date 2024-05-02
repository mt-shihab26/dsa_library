// C++ program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;

int main(void) {
    pair<int, string> p;

    p.first = 1;
    p.second = "Shihab Mahamud";

    cout <<p.first <<", " <<p.second <<endl;


    // inilize value togather
    // make_pair() function
    pair<int, double> p2;
    // p2 = make_pair(12, 234.234);
    p2 = {12, 234.234};
    
    cout <<p2.first <<", " <<p2.second <<endl;

}

/*
## pair fundamental
```c++
pair<int, string> p;

p.first = 1;
p.second = "Shihab Mahamud";

cout <<p.first <<", " <<p.second <<endl;
```

## make_pair() function
```c++
// we can initialized value with make_pair function
pair<int, double> p2;
p2 = make_pair(12, 234.234);    
```
makde_pair() alternative
```c++
p2 = {12, 234.234};
```

## pair::constructor() method
```c++
pair<string, double> default_p;  // default constructor
pair<string, double> ini_p("tomatoes", 2.30); // initialization
pair<string, double> copy_p(ini_p); // copy
```

## If value not Initialized in pair variable
```c
pair<int, double> p;
// it is initialized to 0;
cout <<p.first <<" ";
// it is initialized to 0
cout <<p.second <<endl;

pair <string, char> p2;
// it prints noting i.e NULL
cout <<p2.first <<" ";
// it prints nothing i.e NULL
cout <<p2.second <<endl;
```

## pair::operator=
```c++
pair<string, int> planet("Earth", 6371), homeplanet;

// copy planet to homeplanet
homeplanet = planet;

// assign reference
pair<string, int> &ref_planet = homeplanet;

ref_planet = {"Mongol", 23423};
```

## pair::swap() method
```c++
pair<int, char> foo(10, 'a'), bar(90, 'z');
// to swap foo value into bar
foo.swap(bar);
```

## swap() function
```c++
pair<int, char> foo(10, 'a'), bar(90, 'z');
// to swap foo value into bar
swap(foo, bar);
```

## pair Array
```c++
// int a[] = {1, 2, 3};
// int b[] = {2, 3, 4};
pair<int,int> p_array[3];
p_array[0] = {1, 2};
p_array[1] = {2, 3};
p_array[2] = {3, 4};

swap(p_array[0], p_array[1]);

for (int i = 0; i < 3; i++) {
    cout <<p_array[i].first <<" " <<p_array[i].second <<"\n";
}
```

## input output pair
```c++
pair<int, string> p;
cin >>p.first;
cin >>p.second;
cout <<p.first <<" ";
cout <<p.second;
```
*/