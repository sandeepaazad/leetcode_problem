class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};
//other method using selectio sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),min_idx;
        for(int i=0;i<n;i++){
            min_idx=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[min_idx])
                    min_idx=j;
            }
        int temp=nums[min_idx];
        nums[min_idx]=nums[i];
        nums[i]=temp;
        }
    }
};
