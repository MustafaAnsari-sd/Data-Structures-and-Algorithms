#include<bits/stdc++.h>
using namespace std;
void reverse_part(int i, int j, vector<int> &v){
    while(i<j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"Enter size of Arrays: ";
    cin>>n;
    if(n==0) return 0;
    vector<int> v(n);
    cout<<"Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int k;
    cout<<"Enter no. of Rotations: ";
    cin>>k;
    if(k==0) return 0;
    k = k%n;
    reverse_part(0,n-k-1, v);
    reverse_part(n-k, n-1, v);
    reverse_part(0,n-1, v);
    for(auto m: v){
        cout<<m<<" ";
    }
   
}
