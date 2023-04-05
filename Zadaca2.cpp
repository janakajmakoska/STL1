#include <iostream>
#include <iomanip>

template<typename T, std::size_t N>
int printArray(const T(&arr)[N], int lowSubscript, int highSubscript) {
    if (lowSubscript < 0 || highSubscript >= N || lowSubscript > highSubscript) {
        return 0;
    }
    for (int i = lowSubscript; i <= highSubscript; i++) {
        std::cout << std::setw(8) << arr[i];
    }
    std::cout << std::endl;
    return highSubscript - lowSubscript + 1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    double b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

    std::cout << "Printing a[1..3]: ";
    int numElements = printArray(a, 1, 3);
    std::cout << numElements << " elements printed." << std::endl;

    std::cout << "Printing b[0..4]: ";
    numElements = printArray(b, 0, 4);
    std::cout << numElements << " elements printed." << std::endl;

    std::cout << "Printing c[2..10]: ";
    numElements = printArray(c, 2, 10);
    std::cout << numElements << " elements printed." << std::endl;

    return 0;
}
