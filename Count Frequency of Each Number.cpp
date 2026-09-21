#include <iostream>
using namespace std;

int main() {
    int arr[8];
    bool counted[8] = {false};

    cout << "Enter 8 numbers: ";

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    cout << "\nFrequency of numbers:\n";

    for (int i = 0; i < 8; i++) {

        if (counted[i]) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < 8; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = true;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}
