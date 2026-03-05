/*
========================================
DSA NOTES – STRING STL FUNCTIONS (C++)
========================================

Important STL functions used with strings.

Header required for reverse():
#include <algorithm>

----------------------------------------
1. length() / size()

Returns the number of characters in the string.

Example:
string s = "Mustafa";

s.length() → 7
s.size()   → 7

Both functions do the SAME thing.

Time Complexity → O(1)

----------------------------------------
2. push_back()

Adds a character at the END of the string.

Example:
string s = "abc";

s.push_back('d');

Result:
abcd

Time Complexity → O(1)

----------------------------------------
3. pop_back()

Removes the LAST character from the string.

Example:
string s = "abcd";

s.pop_back();

Result:
abc

Time Complexity → O(1)

----------------------------------------
4. String Concatenation (+)

Two strings can be joined using the '+' operator.

Example:

string s1 = "Hello";
string s2 = "World";

string result = s1 + s2;

Result:
HelloWorld

----------------------------------------
5. reverse()

Used to reverse a string.

Syntax:

reverse(start_iterator, end_iterator)

Example:

string s = "Mustafa";

reverse(s.begin(), s.end());

Result:
afatsuM

Time Complexity → O(n)

----------------------------------------
NOTE

begin() → iterator pointing to first character
end()   → iterator pointing AFTER last character

So:

reverse(s.begin(), s.end())

reverses the entire string.

----------------------------------------
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "Mustafa Ansari";

    // length of string
    cout << s.length() << endl;

    // same as length()
    cout << s.size() << endl;

    // add character at end
    s.push_back('i');

    cout << s << endl;

    // remove last character
    s.pop_back();

    cout << s << endl;

    // reverse entire string
    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}