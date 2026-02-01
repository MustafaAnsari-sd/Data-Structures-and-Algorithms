#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    // Edge case: less than 2 elements
    if (n < 2) {
        cout << "Second largest element does not exist";
        return 0;
    }

    vector<int> v(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int largest = INT_MIN;
    int slargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (v[i] > largest) {
            slargest = largest;
            largest = v[i];
        }
        else if (v[i] > slargest && v[i] != largest) {
            slargest = v[i];
        }
    }

    // Edge case: all elements same
    if (slargest == INT_MIN && largest == slargest) {
        cout << "Second largest element does not exist";
    } 
    else {
        cout << "Second largest element is: " << slargest;
    }

    return 0;
}
