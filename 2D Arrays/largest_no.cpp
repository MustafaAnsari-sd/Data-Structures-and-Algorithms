#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row size: ";
    cin>>m;
    cout<<"Enter column size: ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // traverse to find max 
    int max = INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;

}