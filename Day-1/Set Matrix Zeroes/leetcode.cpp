// O(n+m) space solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        // cout<<m<<" "<<n<<endl;
        vector<vector<int>>ans(m,vector<int>(n,-1));
        unordered_set<int>rows,cols;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]!=0){
                    ans[i][j]=matrix[i][j];
                }
                else{
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(auto &r:rows){
            for(int i=0;i<n;i++) ans[r][i]=0;
        }
        for(auto &c:cols){
            for(int i=0;i<m;i++) ans[i][c]=0;
        }
        matrix=ans;
    }
};