#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // string s;
    // cin>>s;
    // sort(s.begin(), s.end()); // sort based on ASCII values
    // cout<<s;

    // Anagram or not
    // string s1;
    // getline(cin,s1);
    // string s2;
    // getline(cin,s2);
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // if(s1==s2){
    //     cout<<"True";
    // }
    // else cout<<"false";

    // Print the character occuring most in lowercase alphabet
    string s;
    getline(cin,s);
    vector<int> v(26,0);
    for(int i=0; i<s.length(); i++){
        char ch= s[i];
        int ascii= (int)ch;
        v[ascii-97]++;
    }
    int mx= 0;
    for(int i=0; i<26; i++){
        if(v[i]> mx) mx= v[i];
    }
    for(int i=0; i<26; i++){
        if(v[i]==mx){
            int ascii= i+97;
            char ch= (int)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
}