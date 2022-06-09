class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,r=nums.size();
        for(int i=0;i<r;i++){
            if(nums[i]==0){
                swap(nums[i],nums[l]);
                l++;
            }
            else if(nums[i]==1) continue;
            else{
                r--;
                swap(nums[i],nums[r]);
                i--;
            }
        }
    }
};