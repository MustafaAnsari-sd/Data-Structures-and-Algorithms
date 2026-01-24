#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Arrays: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter target Element: ";
    cin>>target;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]==target)
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
    }

}