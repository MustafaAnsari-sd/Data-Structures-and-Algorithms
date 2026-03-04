#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;
        
        vector<int> ans;
        
        while(minr <= maxr && minc <= maxc){
            
            // top row
            for(int i = minc; i <= maxc; i++){
                ans.push_back(matrix[minr][i]);
            }
            minr++;
            
            // right column
            for(int i = minr; i <= maxr; i++){
                ans.push_back(matrix[i][maxc]);
            }
            maxc--;
            
            // bottom row
            if(minr <= maxr){
                for(int i = maxc; i >= minc; i--){
                    ans.push_back(matrix[maxr][i]);
                }
                maxr--;
            }
            
            // left column
            if(minc <= maxc){
                for(int i = maxr; i >= minr; i--){
                    ans.push_back(matrix[i][minc]);
                }
                minc++;
            }
        }
        
        return ans;
    }
};