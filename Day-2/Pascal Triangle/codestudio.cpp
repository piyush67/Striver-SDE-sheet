#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>triangle(n,vector<long long int>(n,1ll));
  if(n>1){
    triangle[0].resize(1);
    triangle[1].resize(2);
    for(int i=3;i<=n;i++){
        triangle[i-1].resize(i);
        for(int c=1;c<i-1;c++){
            triangle[i-1][c]=triangle[i-2][c]+triangle[i-2][c-1];
        }
    }
  }
  
  return triangle;
}
