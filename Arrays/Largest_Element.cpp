#include <bits/stdc++.h>
using namespace std;
int main(){
    // find largest element in an array
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>v[i];      //Taking vector input
    }
    int largest = INT_MIN;
    for(int i=0; i<n; i++){
        if(v[i]> largest){
            largest = v[i];
        }
    }
    cout<<largest;

}