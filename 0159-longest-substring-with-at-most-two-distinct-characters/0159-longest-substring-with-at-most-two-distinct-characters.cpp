class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        std::unordered_map<char,int>char_freq;
        int n=s.size(),maxlength=0;
        for(int left=0,i=0;i<n;++i){
            char_freq[s[i]]++;
            while(char_freq.size()>2){
                char_freq[s[left]]--;
                if(char_freq[s[left]]==0){
                    char_freq.erase(s[left]);
                }
                ++left;
            }
            maxlength=std::max(maxlength,i-left+1);
        }
        return maxlength;
    }
};