#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr1(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }

    int o, p;
    cin >> o >> p;

    vector<vector<int>> arr2(o, vector<int>(p));
    for (int i = 0; i < o; i++) {
        for (int j = 0; j < p; j++) {
            cin >> arr2[i][j];
        }
    }

    if (n != o) {
        cout << "The matrices cannot be multiplied";
        return 0;
    }

    vector<vector<int>> res(m, vector<int>(p, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
