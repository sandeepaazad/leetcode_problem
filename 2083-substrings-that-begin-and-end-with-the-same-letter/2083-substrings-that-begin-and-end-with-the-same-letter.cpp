class Solution {
public:
    long long numberOfSubstrings(string s) {
        long long ans=0;
        vector<long long>count(26,0);
        for(char ch:s){
            count[ch-'a']++;
        }
        for(long long curr:count){
            ans+=(curr*(curr+1))/2;
        }
    return ans;    
    }
};