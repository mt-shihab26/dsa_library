## Lecture 21 File Handling
### Streams
![streams img 1](../img/img01-streams.png)
![streams img 2](../img/img02-streams.png)
### File Writing
```c++
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("myfile.txt");
    string text = "The quick brown fox jumps over the lazy dog";

    file << text << endl;

    file.close();

    return 0;
}
```

### Where to write modes?
* As a second argument of open() function.
* `fout.open("file_name", file_opening_mode | file_opening_mode);`
### Text mode vs binary mode
* Text mode is the default opening mode
* Binary mode can be specified wit hios::binary
### tellg() and tellp() function
* tellg()
    ```c++
    // C++ program to illustrate the
    // use of tellg()
    #include <fstream>
    #include <iostream>
    using namespace std;

    // Driver Code
    int main()
    {
        ifstream fin;
        char ch;

        // Opens the existing file
        fin.open("gfg.txt");

        int pos;
        pos = fin.tellg();
        cout << pos;

        fin >> ch;
        pos = fin.tellg();
        cout << pos;

        fin >> ch;
        pos = fin.tellg();
        cout << pos;

        return 0;
    }

    ```
* tellp
    ```c++
    // C++ program illustrating the
    // use of tellp()
    #include <fstream>
    #include <iostream>
    using namespace std;

    // Driver Code
    int main()
    {
        ofstream fout;
        char ch;

        // Opening the already existing file
        fout.open("gfg.txt", ios::app);
        int pos;
        pos = fout.tellp();
        cout << pos;

        fout << "print it";
        pos = fout.tellp();
        cout << pos;
        fout.close();

        return 0;
    }
    ```
### seekg and seekp functions
* Defined in istream class
* Its prototype is
    * `istream &seekg(streampos pos);`
    * `istream &seekg(streamof of, ios_base::seekdir_way);`
* **pos** is new absolute position within the stream (relative to the beginning).
* **off** is offset value, relative to the way parameter.
* **way** value `ios_base::beg`, `ios_base::cur` and `ios_base::end`
```c++
#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    ifstream fin;
    fin.open("abc.txt");
    cout << fin.tellg();
    cout << endl << (char) fin.get();
    cout << endl << fin.tellg();
    fin.seekg(6);
    cout << endl << fin.tellg();
    cout << endl << (char) fin.get();
    cout << endl << fin.tellg();
    fin.seekg(2, ios_base::cur);
    cout << endl << fin.tellg();
}
```
* Defined in ostream class
* Its prototype is
    * `ostream &seekp(streampos pos);`
    * `ostream &seekp(streamof of, ios_base::seekdir_way);`
* **pos** is new absolute position within the stream (relative to the beginning).
* **off** is offset value, relative to the way parameter.
* **way** value `ios_base::beg`, `ios_base::cur` and `ios_base::end`