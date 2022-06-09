class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>mp;
        int cs=0;
        int ml=0;
        for(int i=0;i<n;i++){
            if(cs+A[i]==0){
                mp[0]=i;
                ml=i+1;
            }
            else{
                if(mp.find(cs+A[i])!=mp.end()){
                    ml=max(ml,i-mp[cs+A[i]]);
                }
                else mp[cs+A[i]]=i;
            }
            cs+=A[i];
        }
        return ml;
    }
};