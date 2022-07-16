#include <bits/stdc++.h>
using namespace std;

int main()
{
    const char *name = "Shihab";

    char name2[7] = {'S', 'h', 'i', 'h', 'a', 'b', 0};
    cout << name << "\n";
    cout << name2 << "\n";

    string name3 = "Shihab ";
    string name4 = "Mahamud";
    string full_name = name3 + name4;
    cout << full_name << "\n";

    string full_name2 = string("Shihab ") + "Mahamud";
    cout << full_name2 << "\n";

    cout << full_name2.size() << "\n";

    int position = full_name2.find("hab");
    if (position != string::npos)
    {
        cout << "postion is " << position << "\n";
    }
    else
    {
        cout << "Not found"
             << "\n";
    }

    char name5[10] = "Shihab";
    name5[0] = '2';
    cout << name5 << "\n";

    const char *name6 = "Shihab";
    const wchar_t *name7 = L"Shihab";
    const char16_t *name8 = u"Shihab";
    const char32_t *name9 = U"Shihab";

    using namespace std::string_literals;

    const char *example = R"(Line1
Line2
Line3
Line4)";
    cout << example << "\n";

    const char *example2 = "Line1\n"
                           "Line2\n"
                           "Line3\n";
    cout << example2 << "\n";

    // string s1 = "Hello ";
    // string s2 = "World";
    // s1.append(s2);

    // cout <<s1 <<endl;

    // string s1 = "Hello World";
    // string s2 = s1.substr(4, 8);
    // cout <<s2 <<endl;

    // string s = "Hello World";
    // cout <<s <<endl;
    // s.clear();
    // cout <<"After Cleared: " <<s <<endl;

    // string s1 = "Hello World";
    // s1.erase(3, 6);
    // cout <<s1 <<endl;
}