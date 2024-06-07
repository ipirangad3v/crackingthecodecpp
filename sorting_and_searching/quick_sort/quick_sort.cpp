//
// Created by Anthoni on 07/06/24.
//

#include <algorithm>

int partition(int array[], const int low, const int high) {
    // Pega o elemento do meio como pivô
    const int pivot = array[(low + high) / 2];

    int i = low - 1;
    int j = high + 1;

    while (true) {
        // Encontra o elemento do lado esquerdo que é maior que o pivô
        do {
            ++i;
        } while (array[i] < pivot);

        // Encontra o elemento do lado direito que é menor que o pivô
        do {
            --j;
        } while (array[j] > pivot);

        // Se os índices se cruzarem, o particionamento está completo
        if (i >= j) {
            return j;
        }

        // Troca os elementos encontrados
        std::swap(array[i], array[j]);
    }
}

void quickSort(int array[], const int low, const int high) {
    if (low < high) {
        // Pega o índice do pivô após particionar o vetor
        const int pivotIndex = partition(array, low, high);

        // Ordena os elementos antes e depois do pivô
        quickSort(array, low, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, high);
    }
}
