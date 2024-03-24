class Solution {
public:
int dominantIndex(vector<int>& nums) {
    int l1 = 0, l2 = (nums[0] < nums[1])? 0 : 1;
    for(int i = 1; i < nums.size(); ++i){
        if(nums[i] > nums[l1]) { l2 = l1; l1 = i;}
        else if(nums[i] > nums[l2]) l2 = i;
    }
    return (nums[l1] >= 2*nums[l2])?l1: -1;
}
};