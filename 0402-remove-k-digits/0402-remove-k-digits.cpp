class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        std::deque<char> stack;
        
        for(char digit : num) {
            while(!stack.empty() && k > 0 && stack.back() > digit) {
                stack.pop_back();
                k -= 1;
            }
            stack.push_back(digit);
        }
            for(int i = 0; i < k; ++i) {
            stack.pop_back();
        }
        std::string ret;
        bool leadingZero = true;
        for(char digit : stack) {
            if(leadingZero && digit == '0') continue;
            leadingZero = false;
            ret.push_back(digit);
        }
        if(ret.empty()) return "0";
        return ret;
    }
};
