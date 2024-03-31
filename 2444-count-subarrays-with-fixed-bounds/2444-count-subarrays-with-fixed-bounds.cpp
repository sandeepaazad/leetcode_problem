class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int LastIdxRangeOut=-1,LastMinIdx=-1,LastMaxIdx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK)
                LastIdxRangeOut=i;
            if(nums[i]==minK)
                LastMinIdx=i;
            if(nums[i]==maxK)
                LastMaxIdx=i;
        ans+=max(0,min(LastMinIdx,LastMaxIdx)-LastIdxRangeOut);
        }
    return ans;
    }
};