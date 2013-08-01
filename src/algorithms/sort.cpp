#include <iostream>

void bubble_sort(float arr[], int n) {
    float buffer;
    for (int i = 0; i < n; i++)
        for (int j = n-1; j > i; j--) {
            if (arr[j-1] > arr[j]) {
                buffer = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = buffer;
            }
        }
}

void display(float arr[], int n) {
    std::cout << "Display array, size=" << n << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << "[" << i << "]=" << arr[i] << std::endl;
}

int main(int argc, char** argv) {
    float arr[] = {2.9, 6.3, 7.4, 4.7, 1.654, 76.342, 23.74, 6.234, 4.322, 9.4532};
    int size = 10;
    display(arr, size);
    bubble_sort(arr, size);
    display(arr, size);
    return 0;
}
