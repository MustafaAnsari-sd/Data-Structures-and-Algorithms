#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row size of matrix 1: ";
    cin>>m;
    cout<<"Enter column size of matrix 1: ";
    cin>>n;
    int arr1[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }
    int o,p;
    cout<<"Enter row size of matrix 2: ";
    cin>>o;
    cout<<"Enter column size of matrix 2: ";
    cin>>p;
    int arr2[o][p];
    for(int i=0; i<o; i++){
        for(int j=0; j<p; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    if(m==o && n==p){
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<arr1[i][j] + arr2[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"Addition of matrix of different size is not posiible";

}