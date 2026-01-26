#include<bits/stdc++.h>
using namespace std;
int main(){
    // int m;
    // cout<<"Enter no. of rows: ";
    // cin>>m;
    // int n;
    // cout<<"Enter no. of columns: ";
    // cin>>n; 
    // int arr[m][n];
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // //printing 2D Array
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[i][j]<<" ";

    //     }
    //     cout<<endl;
    
    // WAP to store roll no. and marks obtained by 4 students
    int arr1[4][2];
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}