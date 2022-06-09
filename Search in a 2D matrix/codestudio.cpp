#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int s=0,e=m*n-1;
    while(s<=e){
        int mid=(s+e)/2;
        int row=mid/n;
        int col=mid%n;
        if(mat[row][col]==target) return true;
        if(mat[row][col]>target) e=mid-1;
        else s=mid+1;
    }
    return false;
}