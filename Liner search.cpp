#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int search;
    bool found = false;

    cout << "Enter 6 numbers: ";

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == search) {
            cout << search << " found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << search << " was not found in the array." << endl;
    }

    return 0;
}
