// CPP program to get a string from single
// character.
#include <bits/stdc++.h>
using namespace std;

string getString(char x)
{
    // string class has a constructor
    // that allows us to specify size of
    // string as first parameter and character
    // to be filled in given size as second
    // parameter.
    string s(1, x);

    return s;
}

int main()
{
    cout << getString('a');
    return 0;
}

// 1- using =/+= operator
// CPP program to get a string from single
// character.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ex = 'G';
    string str;

    // Using += operator (here we append character to end of string)
    str += ex;
    cout << str << endl;

    // using = operator (overwrites the string)
    str = "GeekForGeeks";
    str = ex;
    cout << str << endl;
}

// 2- std::string::append()
// CPP program to get a string from single
// character.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    str.append(1, 'G');
    cout << str << endl;
}

// 3- std::string::assign()
// CPP program to get a string from single
// character.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "GeekForGeeks";
    // assign method overwrites initial content
    str.assign(1, 'G');
    cout << str << endl;
}

// 4- std::stringstream
// CPP program to get a string from single
// character by stringstream.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stringstream stream;

    // adding our character to stream
    char ex = 'G';
    stream << ex;

    // retrieving back our input into string
    string str;
    stream >> str;

    cout << str << endl;
}
