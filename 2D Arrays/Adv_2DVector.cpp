#include <bits/stdc++.h>
using namespace std;

/*
------------------------------------------------------------
WHY THIS FILE EXISTS (FOR GITHUB / INTERVIEW REVIEW)
------------------------------------------------------------

This program demonstrates:

1. Why passing 1D arrays works easily
2. Why passing 2D arrays has limitations
3. Why 2D vectors (vector<vector<int>>) are BETTER and PREFERRED
   in DSA, Competitive Programming, and Interviews

------------------------------------------------------------
*/


// ------------------- 1D ARRAY FUNCTION -------------------
/*
In 1D arrays:
- Array name decays to pointer
- Changes made inside function reflect in main()
*/
void change1DArray(int a[]) {
    a[0] = 10;
}


// ------------------- 2D ARRAY FUNCTION -------------------
/*
IMPORTANT LIMITATION OF 2D ARRAYS:

- While passing a 2D array to a function,
  NUMBER OF COLUMNS MUST BE FIXED.

- This makes 2D arrays:
  ❌ NOT flexible
  ❌ NOT dynamic
  ❌ NOT suitable for real DSA problems
*/
void change2DArray(int arr[3][3]) {
    arr[0][0] = 20;
}


// ------------------- 1D VECTOR FUNCTION -------------------
/*
Vector is passed by reference using '&'
- No size issues
- Clean syntax
- Preferred approach
*/
void change1DVector(vector<int> &v) {
    v[0] = 30;
}


// ------------------- 2D VECTOR FUNCTION -------------------
/*
MAJOR ADVANTAGE:

- NO need to specify rows or columns
- Works for ANY matrix size
- Fully dynamic
- Interview friendly
*/
void change2DVector(vector<vector<int>> &mat) {
    mat[0][0] = 40;
}


// ------------------- MAIN FUNCTION -------------------
int main() {

    // ================= 1D ARRAY =================
    int a[3] = {1, 2, 3};

    cout << "1D Array before change: " << a[0] << endl;
    change1DArray(a);
    cout << "1D Array after change:  " << a[0] << endl;

    cout << endl;


    // ================= 2D ARRAY =================
    /*
    LIMITATIONS:
    - Size fixed at compile time
    - Cannot take runtime input for dimensions
    - Column size mandatory in function
    */
    int arr[3][3] = {
        {5, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "2D Array before change: " << arr[0][0] << endl;
    change2DArray(arr);
    cout << "2D Array after change:  " << arr[0][0] << endl;

    cout << endl;


    // ================= 1D VECTOR =================
    /*
    ADVANTAGES OVER ARRAY:
    - Dynamic size
    - STL support
    - Easy to pass to functions
    */
    vector<int> v = {1, 2, 3};

    cout << "1D Vector before change: " << v[0] << endl;
    change1DVector(v);
    cout << "1D Vector after change:  " << v[0] << endl;

    cout << endl;


    // ================= 2D VECTOR =================
    /*
    WHY 2D VECTOR IS BEST FOR DSA:

    1. No fixed size
    2. Runtime dimensions possible
    3. No column restriction in functions
    4. Memory efficient
    5. Used in LeetCode / Codeforces
    */

    vector<vector<int>> mat = {
        {5, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "2D Vector before change: " << mat[0][0] << endl;
    change2DVector(mat);
    cout << "2D Vector after change:  " << mat[0][0] << endl;

    cout << endl;


    // ================= FINAL CONCLUSION =================
    /*
    SUMMARY (VERY IMPORTANT FOR INTERVIEWS):

    ❌ Use 2D Arrays only for learning basics
    ✅ Use 2D Vectors for:
       - DSA
       - Interviews
       - Competitive Programming
       - Real-world problems
    */

    return 0;
}
