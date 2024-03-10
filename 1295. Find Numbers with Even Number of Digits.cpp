class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(auto num:nums){
            int length=to_string(num).length();
            if(length%2==0){
                even++;
            }
        }
    return even;
    }
};
