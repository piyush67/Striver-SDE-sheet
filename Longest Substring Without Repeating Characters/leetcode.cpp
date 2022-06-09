class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        unordered_map<char,int>mp;
        int l=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(mp.size()==i-l+1){
                if(maxLen<i-l+1) maxLen=i-l+1;
            }
            else{
                while(mp.size()<i-l+1){
                    mp[s[l]]--;
                    if(mp[s[l]]==0) mp.erase(s[l]);
                    l++;
                }
            }
        }
        return maxLen;
    }
};