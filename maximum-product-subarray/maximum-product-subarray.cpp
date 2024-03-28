class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxendinghere=nums[0];
        int minendinghere=nums[0];
        int maxsofar=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
                swap(maxendinghere,minendinghere);
            maxendinghere=max(maxendinghere*nums[i],nums[i]);
            minendinghere=min(minendinghere*nums[i],nums[i]);
            maxsofar=max(maxsofar,maxendinghere);
        }
    return maxsofar;
    }
};