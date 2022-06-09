#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
      int max_len=0;
      unordered_map<int,int>mp;
      for(int i=1;i<arr.size();i++) arr[i]+=arr[i-1];
      for(int i=0;i<arr.size();i++){
          if(arr[i]==0) max_len=i+1;
          else{
              if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
              }
              else{
                  max_len=max(max_len,i-mp[arr[i]]);
              }
          }    
      } 
    return max_len;
}