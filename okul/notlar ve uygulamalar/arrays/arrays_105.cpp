#include <iostream>
using namespace std;

void artanSira(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) { // Corrected loop
            if (arr[j] > arr[j + 1]) { // Sort in ascending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void azalanSira(int arr[], int size, int index) {
    for (int i = index; i < size; i++) {
        for (int j = index; j < size - i + index - 1; j++) { // Corrected loop
            if (arr[j] < arr[j + 1]) { // Sort in descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {214, 16, 42, 151, 23, 71, 89};
    int size = sizeof(arr) / sizeof(*arr);

    // Sort first half in ascending order
    artanSira(arr, size / 2);

    // Sort second half in descending order
    azalanSira(arr, size, size / 2);

    // Display the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
