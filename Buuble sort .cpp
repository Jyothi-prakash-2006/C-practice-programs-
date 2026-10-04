#include <iostream>
using namespace std;

int main() {
    int arr[7];
    int target;

    cout << "Enter 7 numbers in sorted order: ";

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> target;

    int low = 0;
    int high = 6;
    bool found = false;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            cout << target << " found at position "
                 << mid + 1 << endl;

            found = true;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << target << " was not found." << endl;
    }

    return 0;
}
