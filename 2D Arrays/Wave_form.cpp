#include <bits/stdc++.h>
using namespace std;
int main(){
     int m,n;
    cout<<"Enter row size: ";
    cin>>m;
    cout<<"Enter column size: ";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j= n-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}