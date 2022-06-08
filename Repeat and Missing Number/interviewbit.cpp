vector<int> Solution::repeatedNumber(const vector<int> &v) {
    vector<int>A=v;
    int n=A.size();
    for(int i=0;i<n;){
        if(A[A[i]-1]!=A[i]) swap(A[i],A[A[i]-1]);
        else i++;
    }
    int missing,repeating;
    for(int i=0;i<A.size();i++){
        if(A[i]!=i+1) return {A[i],i+1};
    }
    return {n+1,n+1};
}