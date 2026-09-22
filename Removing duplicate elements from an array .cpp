#include <iostream>
using namespace std;

int main() {
    int arr[8];

    cout << "Enter 8 numbers: ";

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    cout << "\nArray after removing duplicates: ";

    for (int i = 0; i < 8; i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
