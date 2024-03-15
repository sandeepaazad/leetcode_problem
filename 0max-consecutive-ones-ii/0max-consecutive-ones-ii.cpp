class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0,right=0;
        int longest=0,numZero=0;
        while(right<nums.size()){
            if(nums[right]==0){
                numZero++;
            }
            while(numZero==2){
                if(nums[left]==0){
                    numZero--;
                }
                left++;
            }
            longest=max(longest,right-left+1);
            right++;
        }
    return longest;
    }
};