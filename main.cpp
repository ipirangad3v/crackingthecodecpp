#include <iostream>
#include "sorting_and_searching/merge_sort.h"

void printArray(int arr[],int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void execute_merge_sort() {
    int array[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Vetor original: " << std::endl;
    printArray(array,size);

    mergeSort(array,size);

    std::cout << "Vetor ordenado:" << std::endl;
    printArray(array,size);
    std::cout << std::endl;
}

int main() {
    execute_merge_sort();
    return 0;
}
