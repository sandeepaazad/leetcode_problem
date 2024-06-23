class Solution {
public:
    typedef pair<int,int>p;
    int longestSubarray(vector<int>& nums, int limit) {
        priority_queue<p,vector<p>> max_pq;
        priority_queue<p,vector<p>,greater<p>> min_pq;
        int i=0;
        int j=0;
        int maxlength=0;
        while(j<nums.size()){
            max_pq.push({nums[j],j});
            min_pq.push({nums[j],j});
            while(max_pq.top().first-min_pq.top().first>limit){
                i=min(max_pq.top().second,min_pq.top().second)+1;
                while(max_pq.top().second<i){
                    max_pq.pop();
                }
                while(min_pq.top().second<i){
                    min_pq.pop();
                }
            }
        maxlength=max(maxlength,j-i+1);
        j++;
        }  
    return maxlength;
    }
};