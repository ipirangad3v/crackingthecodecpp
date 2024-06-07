#include <iostream>
#include "sorting_and_searching/merge_sort/merge_sort.h"
#include "sorting_and_searching/quick_sort/quick_sort.h"

void printArray(int arr[], const int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void execute_merge_sort() {
    int array[] = {38, 27, 43, 3, 9, 82, 10};
    constexpr int size = std::size(array);

    std::cout << "Vetor original: " << std::endl;
    printArray(array, size);

    mergeSort(array, size);

    std::cout << "Vetor ordenado:" << std::endl;
    printArray(array, size);
    std::cout << std::endl;
}

void execute_quick_sort() {
    int array[] = {38, 27, 43, 3, 9, 82, 10};
    constexpr int size = std::size(array);

    std::cout << "Vetor original: " << std::endl;
    printArray(array, size);

    quickSort(array, 0, size - 1);

    std::cout << "Vetor ordenado:" << std::endl;
    printArray(array, size);
    std::cout << std::endl;
}

int main() {
    execute_merge_sort();
    execute_quick_sort();
    return 0;
}
