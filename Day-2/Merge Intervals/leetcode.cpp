class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        vector<vector<int>>intervals;
        vector<int>last=v[0];
        for(int i=1;i<n;i++){
          if(v[i][0]>last[1]){
            intervals.push_back(last);
            last=v[i];
          }
          else{
            last[1]=max(last[1],v[i][1]);
          }
        }
        intervals.push_back(last);
        return intervals;
    }
};