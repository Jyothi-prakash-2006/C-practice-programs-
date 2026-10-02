#include <iostream>
using namespace std;

int main() {
    int arr[6];

    cout << "Enter 6 numbers: ";

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < 5; i++) {

        int smallest = i;

        for (int j = i + 1; j < 6; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }

        // Swap
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }

    cout << "\nSorted array: ";

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}