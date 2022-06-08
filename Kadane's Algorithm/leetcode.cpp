class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_ans=nums[0],max_ans=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_ans=max(curr_ans+nums[i],nums[i]);
            max_ans=max(max_ans,curr_ans);
        }
        return max_ans;
    }
};