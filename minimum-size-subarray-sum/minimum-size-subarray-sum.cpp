class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int start=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                ans=min(ans,i+1-start);
                sum-=nums[start++];
            }
        }
    return (ans!=INT_MAX)?ans:0;
    }
};