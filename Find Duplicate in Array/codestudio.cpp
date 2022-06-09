// O(n) time and o(1) space solution, with in-place modifications in the array
#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])-1]<0) return abs(arr[i]);
        arr[abs(arr[i])-1]*=-1;
    }
    return 1;
}

// O(n) time and O(1) space solution with no modifications in the array

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	int slow=0,fast=0;
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }
    while(arr[slow]!=arr[fast]);
    slow=0;
    while(arr[slow]!=arr[fast]){
        slow=arr[slow];
        fast=arr[fast];
    }
    return arr[slow];
}
