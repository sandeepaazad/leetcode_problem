class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.size()-1;
        int n2=b.size()-1;
        string ret="";
        int carry=0;
        while(n1>=0 || n2>=0 || carry!=0){
            if(n1>=0){
                carry+=a[n1]=='0'?0:1;
                n1--;
            }
            if(n2>=0){
                carry+=b[n2]=='0'?0:1;
                n2--;
            }
            ret=((carry%2)==0?"0":"1")+ret;
            carry/=2;
        }
        return ret;
        
    }
};