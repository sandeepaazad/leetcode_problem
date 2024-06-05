class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<int>Common(26),curr(26);
        vector<string>res;
        for(char& ch:words[0]){
            Common[ch-'a']++;
        }
        for(int i=1;i<n;i++){
            fill(curr.begin(),curr.end(),0);
            for(char& ch:words[i]){
                curr[ch-'a']++;
            }
            for(int j=0;j<26;j++){
                Common[j]=min(Common[j],curr[j]);
            }
        }
        for(int j=0;j<26;j++){
            for(int count=0;count<Common[j];count++){
                res.push_back(string(1,j+'a'));
            }
        }
    return res;
    }
};