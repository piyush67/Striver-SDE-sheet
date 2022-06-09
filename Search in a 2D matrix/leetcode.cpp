class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        if(target<matrix[0][0] || target>matrix[m-1][n-1]) return false;
        int s=0,e=m-1;
        int r=0;
        while(s<=e){
            int mid=(s+e)/2;
            if(matrix[mid][0]==target) return true;
            if(matrix[mid][0]<target){
                r=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        s=0,e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(matrix[r][mid]==target) return true;
            if(matrix[r][mid]>target) e=mid-1;
            else s=mid+1;
        }
        return false;
    }
};