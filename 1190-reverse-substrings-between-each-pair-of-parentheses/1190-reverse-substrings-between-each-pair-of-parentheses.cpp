class Solution {
public:
    string reverseParentheses(string s) {
       stack<int>open;
       string res;
       for(auto ch:s){
        if(ch=='('){
            open.push(res.length());
        }else if(ch==')'){
            int start=open.top();
            open.pop();
            reverse(res.begin()+start,res.end());
        }else{
            res+=ch;
        }
       }
    return res; 
    }
};