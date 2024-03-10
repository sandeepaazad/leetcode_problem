class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxCnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt+=1;
                if(cnt>maxCnt){
                    maxCnt=cnt;
                }
            }else{
                cnt=0;
            }
        }
    return maxCnt;
    }
};
