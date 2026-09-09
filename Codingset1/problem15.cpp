#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int newSize = 0;

    for (int i = 0; i < N; i++) {
        bool duplicate = false;

        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    // Print array without duplicates
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}