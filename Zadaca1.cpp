 #include <iostream>
#include <algorithm>
#include <array>

template <typename T, std::size_t N>
void sortArray(std::array<T, N>& arr) {
    std::sort(arr.begin(), arr.end());
}

int main() {
    std::array<int, 5> intArr = {5, 3, 1, 4, 2};
    std::array<double, 5> doubleArr = {5.5, 3.3, 1.1, 4.4, 2.2};

    sortArray(intArr);
    sortArray(doubleArr);

    std::cout << "Sorted int array: ";
    for (const auto& i : intArr) {
        std::cout << i << " ";
    }

    std::cout << "\nSorted double array: ";
    for (const auto& d : doubleArr) {
        std::cout << d << " ";
    }

    return 0;
}
