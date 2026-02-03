#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows/columns: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Transpose in-place
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "\nTransposed Matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
