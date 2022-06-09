#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	for(int i=0;i<n;i++){
        if(arr[arr[i]-1]!=arr[i]){
            swap(arr[i],arr[arr[i]-1]);
            i--;
        }
    } 
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1) return {i+1,arr[i]};
    }
    return {};	
}
