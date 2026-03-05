/*
========================================
DSA NOTES – STRINGS IN C++
========================================

1. WHAT IS A STRING?

A string is a sequence of characters used to represent text.

Examples:
"hello"
"Mustafa"
"DSA"

In programming, strings are stored as arrays of characters.

------------------------------------------------------------

2. C-STYLE STRINGS (CHARACTER ARRAYS)

Before the C++ string datatype existed, strings were stored
using character arrays.

Example:

char str[] = {'a','b','c','d','\0'};

Memory Representation:

a   b   c   d   \0
|   |   |   |   |
0   1   2   3   4

------------------------------------------------------------

3. NULL CHARACTER '\0'

Every C-style string ends with a NULL CHARACTER.

'\0'

ASCII value of '\0' = 0

Purpose:
It tells the compiler where the string ends.

Example:

char str2[] = {'f','g','\0','h','i','j'};

cout << str2;

Output:
fg

Printing stops when '\0' is encountered.

------------------------------------------------------------

4. MODERN C++ STRING (string class)

C++ provides a built-in datatype called:

string

Header required:

#include <string>

Example:

string str = "Mustafa Ansari";

Advantages over char arrays:

• Dynamic size
• Easy to use
• No manual null character handling
• Many built-in functions available

------------------------------------------------------------

5. STRING INDEXING

Strings use 0-based indexing just like arrays.

Example:

string str = "Mustafa";

Index positions:

M  u  s  t  a  f  a
0  1  2  3  4  5  6

Access characters:

str[0] → 'M'
str[3] → 't'

------------------------------------------------------------

6. TAKING STRING INPUT

Method 1 — Using cin

string s;
cin >> s;

Problem:
cin stops reading when space occurs.

Example Input:
Mustafa Ansari

Stored value:
Mustafa

------------------------------------------------------------

Method 2 — Using getline()

Best method for sentences.

string s;
getline(cin, s);

Example Input:
Mustafa Ansari

Stored value:
Mustafa Ansari

------------------------------------------------------------

7. STRINGS ARE MUTABLE IN C++

Mutable means characters can be modified.

Example:

string name = "Mustafa";

name[0] = 'm';

Result:
mustafa

------------------------------------------------------------

8. COMPLETE EXAMPLE PROGRAM

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // creating string
    string str = "Mustafa Ansari";

    // accessing character using index
    cout << str[3] << endl;

    // taking input with spaces
    string s;
    getline(cin, s);

    cout << s << endl;

    return 0;
}

/*

------------------------------------------------------------

9. IMPORTANT DSA STRING TOPICS

After learning basics, next important problems:

1. String Length
2. String Traversal
3. Reverse String
4. Palindrome Check
5. Character Frequency
6. Remove Spaces
7. Case Conversion (Upper/Lower)
8. Anagram Problems
9. String Hashing

------------------------------------------------------------

10. TIME COMPLEXITY OF BASIC OPERATIONS

Access character by index → O(1)

Traverse string → O(n)

Modify character → O(1)

------------------------------------------------------------

INTERVIEW NOTE

In DSA problems, strings are usually treated as:

STRING = CHARACTER ARRAY

So most string algorithms are similar to array algorithms.

------------------------------------------------------------
*/