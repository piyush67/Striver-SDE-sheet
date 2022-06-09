#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>>merged;
    sort(intervals.begin(),intervals.end());
    merged.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++){
        int start_time=intervals[i][0];
        int end_time=intervals[i][1];
        int n=merged.size();
        if(start_time>merged[n-1][1]){
            merged.push_back(intervals[i]);
        }
        else{
            merged[n-1][1]=max(merged[n-1][1],end_time);
        }
    }
    return merged;
}
