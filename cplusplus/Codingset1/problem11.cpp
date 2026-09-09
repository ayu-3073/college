#include <iostream>
using namespace std;

int main() {
    int N, key;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> key;

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    cout << "Occurrences = " << count << endl;

    return 0;
}