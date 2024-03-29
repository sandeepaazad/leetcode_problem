
class Solution {
public:
    string reverseWords(string s) {
        int last=-1;
        int len=(int)s.size();
        for(int i=0;i<=len;i++){
            if(i==len || s[i]==' '){
                int start=last+1;
                int end=i-1;
                while(start<end){
                    char temp=s[start];
                    s[start]=s[end];
                    s[end]=temp;
                    start++;
                    end--;
                }
                last=i;
            }
        }
    return s;
    }
};