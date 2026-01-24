#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int> &v){
    // remove duplicate from sorted arrays
     int i=0, n=v.size();
     for(int j=1; j<n; j++){
        if(v[j]!= v[i]){
            i++;
            v[i] = v[j];
        }
     }
     return i+1;
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
    
    duplicate(v);
   
}
