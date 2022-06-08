class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans={{1}};
        for(int i=2;i<=numRows;i++){
            vector<int>curr(i,1);
            for(int j=1;j<i-1;j++){
                curr[j]=ans[i-2][j]+ans[i-2][j-1];
            }
            ans.push_back(curr);
        }
        return ans;
    }
};