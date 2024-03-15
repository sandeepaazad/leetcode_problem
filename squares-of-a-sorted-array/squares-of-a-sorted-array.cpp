class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }else{
                nums[i]*=nums[i];
                i++;
            }
            
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};