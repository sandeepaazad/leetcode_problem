class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int max_ele=*max_element(nums.begin(),nums.end());
        long long ans=0,i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==max_ele)
                k--;
            while(!k){
                if(nums[i]==max_ele)
                    k++;
                i++;
            }
            ans+=i;
        }
    return ans;
        
    }
};