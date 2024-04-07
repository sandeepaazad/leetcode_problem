class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open_bracket, asterisks;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(') {
                open_bracket.push(i);
            } else if (ch == '*') {
                asterisks.push(i);
            } else if (ch == ')') {
                if (!open_bracket.empty()) {
                    open_bracket.pop();
                } else if (!asterisks.empty()) {
                    asterisks.pop(); 
                } else {
                    return false;
                }
            }
        }
        while (!open_bracket.empty() && !asterisks.empty()) {
            if (open_bracket.top() > asterisks.top())
                return false;
            open_bracket.pop();
            asterisks.pop();
        }
        return open_bracket.empty();
    }
};
