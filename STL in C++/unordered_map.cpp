#include<bits/stdc++.h>
using namespace std;
int main(){
    // Similar to map but order of keys will be random
//     vector<int> arr = {1,2,3,2,1,1,4};

// unordered_map<int,int> freq;

// for(int x : arr){
//     freq[x]++;
// }

// for(auto it : freq){
//     cout << it.first << " -> " << it.second << endl;
// }

//Method 1-
// string s;
// getline(cin,s);
// string t;
// getline(cin,t);
// sort(s.begin(), s.end());
// sort(t.begin(), t.end());
// if(s==t){
//     cout<<"Valid Anagram";
// }
// else cout<<"invalid Anagram";

//Method 2
string s;
getline(cin,s);
string t;
getline(cin, t);
unordered_map<char,int> freq1;
unordered_map<char,int> freq2;
for(int x: s){
    freq1[x]++;
}
for(int x: t){
    freq2[x]++;
}
if(freq1==freq2){
    cout<<"valid Anagram";
}
else cout<<"invlaid anagram";

}