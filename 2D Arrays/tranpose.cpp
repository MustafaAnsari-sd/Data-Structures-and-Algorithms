#include <bits/stdc++.h>
using namespace std;
// int main(){
//      int m,n;
//     cout<<"Enter row size: ";
//     cin>>m;
//     cout<<"Enter column size: ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cin>>arr[j][i];
//         }
//     }
//     cout<<endl;
//      for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//      for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// leetcode 867
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();  // rows
        int n = matrix[0].size(); // columns
        vector<vector<int>> t(n,vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                t[i][j] = matrix[j][i];
            }
        }
        return t;

    }
};