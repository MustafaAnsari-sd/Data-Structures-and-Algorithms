#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int> &v){
    // check if array is sorted and rotated
    int n= v.size();
    int count =0;
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]) count++;
    }
    if(v[n-1]>v[0]) count ++;
    return count <=1;


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
    sorted(v);
}
