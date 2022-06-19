/*
default (1)	        constexpr pair();

copy / move (2)	    template<class U, class V> pair (const pair<U,V>& pr); 
                    template<class U, class V> pair (pair<U,V>&& pr);
                    pair (const pair& pr) = default;
                    pair (pair&& pr) = default;

initialization (3)	pair (const first_type& a, const second_type& b);
                    template<class U, class V> pair (U&& a, V&& b);

piecewise (4)	    template <class... Args1, class... Args2> pair (piecewise_construct_t pwc, tuple<Args1...> first_args,tuple<Args2...> second_args);
*/

#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(void) {
    pair<string, double> default_p;  // default constructor
    pair<string, double> ini_p("tomatoes", 2.30); // initialization
    pair<string, double> copy_p(ini_p); // copy
    
    default_p = {"Lightbulbs", 0.99};

    cout <<default_p.first <<" " <<default_p.second <<endl;
    cout <<ini_p.first <<" " <<ini_p.second <<endl;
    cout <<copy_p.first <<" " <<copy_p.second <<endl;
}
