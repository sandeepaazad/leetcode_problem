class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size() ,prefixSum=0;
        unordered_map<int,int>first_occurance;
        first_occurance[0]=0;
        for(int i=0;i<n;i++){
            prefixSum=(prefixSum+nums[i])%k;
            if(first_occurance.find(prefixSum)!=first_occurance.end()){
                if(i+1 - first_occurance[prefixSum]>=2) return true;
            }
                else {
                    first_occurance[prefixSum]=i+1;
                }
            }
    return false;
    }
};