// Array is linear data structure , 2D Arrays are use for making table to store data, it is also called a matrix.
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Declaration-
    int arr[3][3];
    // int arr[3][3] = {{1,2,3}}, {4,5,6}, {7,8,9}; // Another method
    arr[0][0]= 4;
    cout<<arr[0][0]<<endl;
    // arr[][6] -> correct 
    // arr[1][] -> wrong , column cannot be empty, whereas row is optional

    //More declaration
    int arr1[4][2]= {{1234,56},{1245,33},{222, 212}, {134, 4}};
    int arr2[4][2]= {1234,45,4334,54,4542,66,1122,6};
    int arr3[2][3]= {1,2,3,4,5,6};
    int arr4[][3]= {1,2,4,6,8,9};
    // int arr5[3][]= {1,5,7,36,5} -> wrong (not allowed)
    // traversal - 
    for(int i=0; i<4; i++){ //row 
        for(int j=0; j<2; j++){ //column
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
        
    }

}