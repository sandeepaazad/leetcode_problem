class Solution {
private:
    int solve(vector<int>&nums,int disK){
        map<int,int>freq;
        int left=0,totalCount=0;
        for(int right=0;right<nums.size();right++){
            freq[nums[right]]++;
            while(freq.size()>disK){
                freq[nums[left]]--;
                if(freq[nums[left]]==0)
                freq.erase(nums[left]);
                left++;
            }
            totalCount+=(right-left+1);
        }
    return totalCount;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};