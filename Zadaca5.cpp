#include <iostream>
using namespace std;

template<typename T>
class Array {
private:
    int size;
    T* data;
public:
    Array(int size) : size(size), data(new T[size]) {}
    ~Array() { delete[] data; }

    void set(int index, T value) { data[index] = value; }
    T get(int index) { return data[index]; }

    int getSize() const { return size; }
};

int main() {
    Array<int> intArray(5);
    for (int i = 0; i < intArray.getSize(); i++) {
        intArray.set(i, i);
        cout << intArray.get(i) << " ";
    }
    cout << endl;

    Array<double> doubleArray(7);
    for (size_t i = 0; i < doubleArray.getSize(); i++) {
        doubleArray.set(i, i + 0.5);
        cout << doubleArray.get(i) << " ";
    }
    cout << endl;

    return 0;
}
