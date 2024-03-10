class Solution {
public:
    string solve(string s){
        vector<char>ans;
        for(auto c:s){
            if(c!='#')
                ans.push_back(c);
            else if(!ans.empty())
                ans.pop_back();
        }
        return string(ans.begin(),ans.end());
    }
public:
    bool backspaceCompare(string s, string t) {
        return solve(s)==solve(t);
    }
};
