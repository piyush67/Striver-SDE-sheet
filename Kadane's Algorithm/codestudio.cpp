#include <bits/stdc++.h> 
long long maximum(long long a,long long b){
    return a>=b?a:b;
}
long long maxSubarraySum(int arr[], int n)
{
    long long curr_sum=arr[0],max_sum=arr[0];
    for(int i=1;i<n;i++){
        curr_sum=maximum(curr_sum+arr[i],arr[i]);
        max_sum=maximum(max_sum,curr_sum);
    }
    return  maximum(0,max_sum);
}