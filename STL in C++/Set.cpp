#include<bits/stdc++.h>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(1);
    // s.insert(1); // will not include duplicate
    // s.insert(6);
    // s.insert(3);
    // s.insert(8);
    // s.insert(0);
    // s.emplace(5); //same as insert
    // s.erase(6);
    // if(s.find(5) != s.end())
    // {
    //     cout<<"5 is present"<<endl;
    // }
    // for(int x: s){
    //     cout<<x<<" "; // printing set
    // }
  
// {
//     int n;
//     cin>>n;

//     vector<int> v(n);

//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }

//     set<int> s(v.begin(), v.end());

//     for(int x : s)
//     {
//         cout<<x<<" ";
//     }

//     cout<<endl;

//     if(s.find(7) != s.end())
//     {
//         cout<<"YES";
//     }
//     else
//     {
//         cout<<"NO";
//     }
// }
// }


//Multiset is also similar to set but it can stores duplicate values but in sorted order 
// and all operations such as insert, find, erase, etc are similar to set

{
    multiset<int> ms;

    ms.insert(10);
    ms.insert(5);
    ms.insert(10);
    ms.insert(3);
    ms.insert(10);

    cout<<"Elements: ";

    for(int x : ms)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"Count of 10: "<<ms.count(10)<<endl;

    ms.erase(ms.find(10));

    cout<<"After removing one 10: ";

    for(int x : ms)
    {
        cout<<x<<" ";
    }
}