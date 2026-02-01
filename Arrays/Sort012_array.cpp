#include <bits/stdc++.h>
using namespace std;
// void sort012(vector<int> &v){ 
//     // pattern 1- two passed ( count and fill)
//     int n = v.size();
//     int noz =0, noo =0, no2 =0;
//     for(int i=0; i<n; i++){
//         if(v[i]==0) noz++;
//         else if(v[i]==1) noo++;
//         else no2++;
//     }
//     for(int i=0; i<n; i++){
//         if(i<noz) v[i]=0;
//         else if(i<(noo+noz)) v[i]=1;
//         else v[i]=2;
//     }
// }
// int main(){
//      int n;
//     cout<<"Enter size of Arrays: ";
//     cin>>n;
//     if(n==0) return 0;
//     vector<int> v(n);
//     cout<<"Enter Array Elements: ";
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }
//     sort012(v);
//     for(auto m: v){
//         cout<<m<<" ";
//     }
// }

//pattern 2  - 3 pointer (Dutch flag Algorithm)
void sort012(vector<int> &v){
    int n= v.size();
    int low =0, mid=0, high = n-1;
    while(mid<=high){
        if(v[mid]==2){
            swap(v[mid], v[high]);
            high--;
        }
        else if(v[mid]==0){
            swap(v[mid], v[low]);
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
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
 sort012(v);
 for(auto m: v){
    cout<<m<<" ";
 }
}