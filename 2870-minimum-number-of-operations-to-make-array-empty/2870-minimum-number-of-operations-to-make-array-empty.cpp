class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int ans=0;
        for(auto [_,f]:freq){
            if(f==1)
                return -1;
            ans+=ceil((double)(f)/3);
        }
    return ans;
    }
};