#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    int max_len=0;
    unordered_map<char,int>mp;
    int l=0;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
        while(i-l+1>mp.size()){
            mp[s[l]]--;
            if(mp[s[l]]==0) mp.erase(s[l]);
            l++;
        }
        max_len=max(max_len,i-l+1);
    }
    return max_len;
}