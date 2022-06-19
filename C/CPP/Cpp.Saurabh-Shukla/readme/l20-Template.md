## Lecture 20 - Template
* Function Template
* Class Template
### Template
* The keyword template is used to define functionn template and class template
* It is a way to make your function or class generalize as far as data type is concern.
### Function Template
* Function template is also known as generic function
* Syntax `template <typename Type> Type func_name(type argc1, ...)` or `template <class Type> Type func_name(type argc1, ...)`
* Example
    ```c++
    #include <iostream>
    using namespace std;

    template <typename T>
    T add(T num1, T num2) {
        return (num1 + num2);
    }

    int main() {
        int result1;
        double result2;
        // calling with int parameters
        result1 = add<int>(2, 3);
        cout << "2 + 3 = " << result1 << endl;

        // calling with double parameters
        result2 = add<double>(2.2, 3.3);
        cout << "2.2 + 3.3 = " << result2 << endl;

        return 0;
    }
    ```
### Class Template
* Class Template is also known as generic class
* Syntax `template <typename Type> class class_name() {....};` or `template <class Type> class class_name() {....};`
* Example
    ```c++
    #include <iostream>
    using namespace std;

    template <typename T>
    class Array {
    private:
        T *ptr;
        int size;
    public:
        Array(T arr[], int s);
        void print();
    };

    template <typename T>
    Array<T>::Array(T arr[], int s) {
        ptr = new T[s];
        size = s;
        for(int i = 0; i < size; i++)
            ptr[i] = arr[i];
    }

    template <typename T>
    void Array<T>::print() {
        for (int i = 0; i < size; i++)
            cout<<" "<<*(ptr + i);
        cout<<endl;
    }

    int main() {
        int arr[5] = {1, 2, 3, 4, 5};
        Array<int> a(arr, 5);
        a.print();
        return 0;
    }
    ```