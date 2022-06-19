#include <iostream>

template <typename T>
class _vector
{
    int _size = 0;
    int _capacity = 2;
    T *_store = new T[_capacity];

    void copy(T *from, T *to, int sizetp)
    {
        for (int i = 0; i < size; i++)
            to[i] = from[i];
    }

    void convert_into_new_array()
    {
        if (_size == _capacity)
        {
            _capacity *= 2;
            T *new_store = new T[_capacity];
            copy(_store, new_store, _size);
            delete[] _store;
            _store = new_store;
        }
    }

public:
    // Capacity:
    int size() { return _size; }

    long long int max_size() { return 1073741823; }

    void resize(const int &n)
    {
        T *new_store = new T[n];
        copy(_store, new_store, n);
        delete[] _store;
        _store = new_store;
        _size = n;
    }

    int capacity() { return _capacity; }

    bool empty()
    {
        if (_size == 0)
            return true;
        return false;
    }

    // Element access:
    T at(const int &index) { return _store[index]; }
    T front() { return _store[0]; }
    T back() { return _store[_size - 1]; }

    // Modifiers:
    void push_back(const T &item)
    {
        convert_into_new_array();
        _store[_size++] = item;
    }

    void pop_back() { _size--; }

    void insert(const int &index, T item)
    {
        if (_size > index)
            _store[index] = item;
    }

    void clear()
    {
        delete[] _store;
        _capacity = 2;
        _size = 0;
        _store = new T[_capacity];
    }

    std::string to_string()
    {
        std::string st;
        for (int i = 0; i < _size - 1; i++)
            st += (std::to_string(_store[i]) + " ");
        if (_size > 0)
            st += std::to_string(_store[_size - 1]);
        return st;
    }

    ~_vector()
    {
        delete[] _store;
    }
};

int main()
{
    _vector<int> a;

    a.push_back(23);
    a.push_back(25);
    a.push_back(55);
    std::cout << a.to_string() << "\n";

    a.pop_back();
    std::cout << a.to_string() << "\n";

    a.push_back(44);
    a.push_back(52);
    a.push_back(66);
    std::cout << a.to_string() << "\n";
    a.resize(3);
    a.push_back(23);
    a.push_back(55);
    a.push_back(36);
    std::cout << a.to_string() << "\n";

    std::cout << a.size() << "\n";
    std::cout << a.capacity() << "\n";

    std::cout << a.at(2) << "\n";
    std::cout << a.front() << " " << a.back() << "\n";

    a.insert(2, 123);
    std::cout << a.to_string() << "\n";

    a.clear();
    std::cout << a.to_string() << "\n";
}