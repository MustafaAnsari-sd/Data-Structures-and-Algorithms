#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    int count = 0;
    int n = s.length();

    for(int i = 0; i < n; i++){

        if(i == 0){
            if(s[i] != s[i+1]) count++;
        }

        else if(i == n-1){
            if(s[i] != s[i-1]) count++;
        }

        else{
            if(s[i] != s[i-1] && s[i] != s[i+1])
                count++;
        }

    }

    cout << count;

}
/*
substr()

Used to extract part of a string.

Syntax:

s.substr(start_index, length)

Example:

string s = "Mustafa Ansari";

s.substr(3)

Output:
tafa Ansari

-----------------------

s.substr(0,7)

Output:
Mustafa

-----------------------

Example using middle of string

string s;
getline(cin,s);

int n = s.size();

cout << s.substr(n/2);

-----------------------

to_string()

Converts number → string

Example:

int x = 12345;

string str = to_string(x);

Output:
"12345"
*/