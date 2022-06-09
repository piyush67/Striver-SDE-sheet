// O(n*m) time and O(1) space solution
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
    int n=matrix.size(),m=matrix[0].size();
	bool row=false,col=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
                if(i==0) row=true;
                if(j==0) col=true;
            }
        }
    }
    for(int j=1;j<m;j++){
        if(matrix[0][j]==0){
            for(int i=1;i<n;i++) matrix[i][j]=0;
        }
    }
    for(int i=1;i<n;i++){
        if(matrix[i][0]==0){
            for(int j=1;j<m;j++) matrix[i][j]=0;
        }
    }
    if(matrix[0][0]==0){
        if(row){
            for(int j=1;j<m;j++) matrix[0][j]=0;
        }
        if(col){
            for(int i=1;i<n;i++) matrix[i][0]=0;
        }
    }
}

// O(n*m) time and O(n+m) space solution
void setZeros(vector<vector<int>> &matrix)
{
    int n=matrix.size(),m=matrix[0].size();
	vector<int>cols,rows;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                cols.push_back(j);
                rows.push_back(i);
            }
        }
    }
    for(int &r:rows){
        for(int c=0;c<m;c++) matrix[r][c]=0;
    }
    for(int &c:cols){
        for(int r=0;r<n;r++) matrix[r][c]=0;
    }
}