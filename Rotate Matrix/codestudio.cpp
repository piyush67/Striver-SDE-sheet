#include <bits/stdc++.h> 
void rotateMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int tr=0,rc=m-1,br=n-1,lc=0;
    while(tr<br && lc<rc){
        int last=matrix[tr][lc];
        for(int i=lc;i<rc;i++){
            int temp=matrix[tr][i+1];
            matrix[tr][i+1]=last;
            last=temp;
        }
        for(int i=tr;i<br;i++){
            int temp=matrix[i+1][rc];
            matrix[i+1][rc]=last;
            last=temp;
        }
        if(br>=tr){
            for(int i=rc;i>lc;i--){
                int temp=matrix[br][i-1];
                matrix[br][i-1]=last;
                last=temp;
            }
        }
        if(lc<=rc){
            for(int i=br;i>tr;i--){
                int temp=matrix[i-1][lc];
                matrix[i-1][lc]=last;
                last=temp;
            }
        }
        tr++,rc--,br--,lc++;
    }
}




