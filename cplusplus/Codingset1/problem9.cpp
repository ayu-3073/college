#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int minElement = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Minimum element = " << minElement << endl;

    return 0;
}