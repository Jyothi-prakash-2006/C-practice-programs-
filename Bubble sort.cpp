#include <iostream>
using namespace std;

int main() {
    int arr[6];

    cout << "Enter 6 numbers: ";

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted array: ";

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}