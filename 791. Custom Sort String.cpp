class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>freq;
        for(auto letter:s){
            freq[letter]++;
        }
        string res="";
        for(auto letter:order){
            while(freq[letter]-->0){
                res+=letter;
            }
        }
        for(auto &[letter,count]:freq){
                while(count-->0){
                    res+=letter;

                }
        }
    return res;    
    }
};
