class Solution {
public:
    string reverseWords(string s) {
        if(s.size() == 0)
            return s;

        string result;
        stack<string> wordStack;  

        for(int i = 0; i < s.size(); i++) {
            string word;

            if(s[i] == ' ')
                continue;

            while(i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }

            wordStack.push(word);
        }

        while(!wordStack.empty()) {
            result += wordStack.top();
            wordStack.pop();
            
            if(!wordStack.empty())
                result += " ";
        }

        return result;
    }
};