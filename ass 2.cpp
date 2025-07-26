#include <iostream>
using namespace std;

// Returns number of non-zero elements in a[s...e]
int zeros(int a[], int s, int e) {
    if (s == e) {
        if (a[s] != 0) {
            cout << a[s] << " ";
            return 1;
        } else {
            return 0;
        }
    }

    int mid = (s + e) / 2;

    int l = zeros(a, s, mid);
    int r = zeros(a, mid + 1, e);

    return l + r;
}

int main() {
    int a[10] = {1, 2, 0, 3, 4, 5, 0, 6, 0, 7};
    int n = sizeof(a) / sizeof(a[0]);

    int k = zeros(a, 0, n - 1); // count and print non-zero values

    // Print zeros
    for (int i = 0; i < n - k; i++) {
        cout << "0 ";
    }

    return 0;
}