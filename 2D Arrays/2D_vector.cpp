#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int>v3;
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(12);

    v.push_back(v1); //{1,2,3}
    v.push_back(v2); //{4,5}
    v.push_back(v3); //{7,8,9,10,11,12}

    cout<<v[2][4]<<endl;  //11
    cout<<v[0][2]; //3
}