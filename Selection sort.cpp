#include <iostream>
using namespace std;

int main() {
    int arr[6];

    cout << "Enter 6 numbers: ";

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }


    for (int i = 0; i < 5; i++) {
        int minIndex = i;

        for (int j = i + 1; j < 6; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "\nSorted array: ";

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
