#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int z=0,t=n-1;
    for(int i=0;i<=t;i++){
        if(arr[i]==0){
            swap(arr[i],arr[z]);
            z++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[t]);
            t--;
            i--;
        }
    }
}