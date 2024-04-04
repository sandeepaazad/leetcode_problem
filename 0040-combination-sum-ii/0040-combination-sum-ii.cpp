class Solution {
public:
    void solve(int idx,int target,vector<int>& candidates,vector<vector<int>>& ans,vector<int>&s)
    {
        if(target==0)
        {
            ans.push_back(s);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(candidates[i]>target) break;
            if(i>idx && candidates[i]==candidates[i-1])
                continue;
            s.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,ans,s);
            s.pop_back();
        }
            
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>s;
        solve(0,target,candidates,ans,s);
        return ans;
        
    }
};