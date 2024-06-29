class Solution {
public:
    int numberOfSpecialSubstrings(string s) {
       int count=0;
       int i=0,freq[26]={0};
       for(int j=0;j<s.size();j++){
        freq[s[j]-'a']++;
        while(freq[s[j]-'a']>1){
            freq[s[i]-'a']--;
            i++;
        }
        count+=(j-i+1);
       } 
    return count;
    }
};