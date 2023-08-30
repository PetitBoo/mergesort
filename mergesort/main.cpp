#include "merge.h"

int main() {

    srand(0);
    int arr_size = 20;
    vector<int>array1(arr_size);
    std::cout << "Row of number: ";
    for (int i = 0; i < arr_size; i++) {
        array1[i] = rand() % 50;
        std::cout << array1[i] << " ";
    }
    std::cout << endl;

    mergeSort(array1, 0, arr_size - 1);
    std::cout << "After sorting: ";
    for (int i = 0; i < arr_size; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << endl;
    array1.clear();
    
    srand(0);
    vector<int>array2(arr_size);
    std::cout << "Row of number: ";
    for (int i = 0; i < arr_size; i++) {
        array2[i] = rand() % 20;
        std::cout << array2[i] << " ";
    }
    std::cout << endl;

    mergeSort(array2, 0, arr_size - 1);
    std::cout << "After sorting: ";
    for (int i = 0; i < arr_size; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << endl;
    array2.clear();
    
    srand(0);
    vector<int>array3(arr_size);
    std::cout << "Row of number: ";
    for (int i = 0; i < arr_size; i++) {
        array3[i] = rand() % 30;
        std::cout << array3[i] << " ";
    }
    std::cout << endl;

    mergeSort(array3, 0, arr_size - 1);
    std::cout << "After sorting: ";
    for (long i = 0; i < arr_size; i++) {
        std::cout << array3[i] << " ";
    }
    std::cout << endl;
    array3.clear();

    return 0;
}