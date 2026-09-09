#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum element = " << maxElement << endl;

    return 0;
}