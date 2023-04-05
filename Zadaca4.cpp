#include <iostream>
#include<iomanip>

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << std::setw(4) << arr[i];
    if ((i + 1) % 4 == 0) {
      std::cout << std::endl;
    }
  }
  std::cout << std::endl;
}
int main()
{


int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int size = sizeof(arr) / sizeof(arr[0]);
printArray(arr, size);

return 0;
}
