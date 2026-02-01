#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k = 0; // position for next non-zero

    for(int i = 0; i < n; i++) {
        if(v[i] != 0) {
            v[k] = v[i];
            k++;
        }
    }

    // fill remaining with zeros
    while(k < n) {
        v[k] = 0;
        k++;
    }

    for(int x : v) {
        cout << x << " ";
    }
}
