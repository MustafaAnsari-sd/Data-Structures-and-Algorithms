#include<bits/stdc++.h>
using namespace std;
int main(){
// unordered_set insertion → O(1) average
// set insertion → O(log n)
// multiset insertion → O(log n)

// longest consecutive sequence
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for(int x : s)
        {
            if(s.find(x - 1) == s.end())   // start of sequence
            {
                int length = 1;

                while(s.find(x + length) != s.end())
                {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};