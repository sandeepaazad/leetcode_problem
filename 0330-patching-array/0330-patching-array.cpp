class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long int patches=0,max_num=0,i=0,sz=nums.size();
        while(max_num<n){
            if(i<sz && max_num+1>=nums[i]){
                max_num+=nums[i];
                i++;
            }else{
                patches++;
                max_num+=(max_num+1);
            }
        }
    return patches;
    }
};