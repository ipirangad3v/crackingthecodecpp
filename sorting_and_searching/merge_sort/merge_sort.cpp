//
// Created by Anthoni on 06/06/24.
//

void merge(int array[], int helper[], const int low, const int middle, const int high) {
    // Copia ambas metades para um vetor auxiliar
    for (int i = low; i <= high; ++i) {
        helper[i] = array[i];
    }

    int helperLeft = low;
    int helperRight = middle + 1;
    int current = low;

    // Itera pelo vetor auxiliar. Compara as metades esquerda e direita, copiando o elemento menor das duas metades de volta para o vetor original
    while (helperLeft <= middle && helperRight <= high) {
        if (helper[helperLeft] <= helper[helperRight]) {
            array[current] = helper[helperLeft];
            ++helperLeft;
        } else {
            array[current] = helper[helperRight];
            ++helperRight;
        }
        ++current;
    }

    // Copia o resto da metade esquerda do vetor para o vetor alvo
    const int remaining = middle - helperLeft;
    for (int i = 0; i <= remaining; ++i) {
        array[current + i] = helper[helperLeft + i];
    }
}

void mergeSort(int array[], int helper[], int low, int high) {
    if (low < high) {
        const int middle = (low + high) / 2;
        mergeSort(array, helper, low, middle); // Ordena a metade esquerda
        mergeSort(array, helper, middle + 1, high); // Ordena a metade direita
        merge(array, helper, low, middle, high); // Mescla as metades
    }
}

void mergeSort(int array[], int size) {
    int helper[size]; // Cria um vetor auxiliar com o mesmo tamanho do vetor original
    mergeSort(array, helper, 0, size - 1);
}