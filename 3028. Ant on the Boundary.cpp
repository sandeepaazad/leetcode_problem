class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size(),a=0,count=0,i=0;
        while(i<n){
            a+=nums[i];
            if(a==0) count++;
            i++;
        }
    return count;
    }
};
