class Solution {
public:
    bool check(string s,string w){
        int i=0,j=0;
        while(i<s.length() && j<w.length()){
            char c1=s[i];
            char c2=w[j];
            if(c1!=c2)
                return false;
            int len1=getlen(s,i);
            int len2=getlen(w,j);
            if((len1<3 && len1!=len2) ||(len1>=3 && len1<len2))
                return false;
            i=i+len1;
            j=j+len2;
        }
    return i==s.length() && j==w.length();
    }
    int getlen(string s,int t){
        int c=1;
        t++;
        for(;t<s.length();t++){
            if(s[t]==s[t-1]){
                c++;
            }else
                break;
        }
        return c;
    }
public:
    int expressiveWords(string s, vector<string>& words) {
        int ans=0;
        for(auto& word:words){
            if(check(s,word)){
                ans++;
            }
        }
        return ans;
    }
};
