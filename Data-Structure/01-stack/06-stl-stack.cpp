#include <bits/stdc++.h>
using namespace std;

#define endn '\n'

template <typename T>
void print_stack(stack<T> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endn;
}

int main()
{
    stack<int> st;

    st.push(500);
    st.push(220);

    st.pop();
    // st.pop();
    // st.pop();

    cout << st.top() << "\n";

    cout << "Stack Size: " << st.size() << endn;

    print_stack(st);

    cout << "Stack Size: " << st.size() << endn;

    st.emplace(300);
    print_stack(st);

    stack<int> st1, st2;

    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);

    st2.push(6);
    st2.push(7);
    st2.push(8);

    cout << "Before swap:" << endn;
    cout << "st1: ";
    print_stack(st1);
    cout << "st2: ";
    print_stack(st2);

    st1.swap(st2); // O(n)

    cout << endn << "After swapped: " << endn;
    cout << "st1: ";
    print_stack(st1);
    cout << "st2: ";
    print_stack(st2);
}