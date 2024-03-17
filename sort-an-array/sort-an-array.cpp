class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=n/2-1;i>=0;i--){
            maxheap(nums,n,i);
        }
        for(int i=n-1;i>0;i--){
            int temp=nums[i];
            nums[i]=nums[0];
            nums[0]=temp;
            maxheap(nums,i,0);
        }
        return nums;
    }
    private:
        void maxheap(vector<int>& nums,int heapsize,int idx){
            int left=2*idx+1;
            int right=2*idx+2;
            int largest=idx;
            if(left<heapsize && nums[left]>nums[largest]){
                largest=left;
            }
            if(right<heapsize && nums[right]>nums[largest]){
                largest=right;
            }
            if(largest!=idx){
                int temp=nums[idx];
                nums[idx]=nums[largest];
                nums[largest]=temp;
                maxheap(nums,heapsize,largest);
            }
        }
};