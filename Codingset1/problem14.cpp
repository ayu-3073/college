#include <iostream>
using namespace std;

int main() {
    int N, key;
    cin >> N;

    int arr[N];

    // Input sorted array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Element to search
    cin >> key;

    int left = 0, right = N - 1;
    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}