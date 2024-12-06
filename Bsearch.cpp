#include <iostream>
using namespace std;

// Função para realizar a busca binária
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Verifica se o target está no meio
        if (arr[mid] == target) {
            return mid;  // Retorna o índice do target
        }
        // Se o target for maior que o valor no meio, ignore a metade esquerda
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // Se o target for menor, ignore a metade direita
        else {
            right = mid - 1;
        }
    }
    
    return -1;  // Retorna -1 se o target não for encontrado
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};  // Array ordenado
    int size = sizeof(arr) / sizeof(arr[0]);  // Tamanho do array
    int target = 7;  // Elemento a ser buscado

    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        cout << "Elemento encontrado no índice: " << result << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }

    return 0;
}
