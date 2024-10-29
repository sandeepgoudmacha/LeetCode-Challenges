
class Solution {
public:
    bool isValid(std::string s) {
        stack<char> stack;
        unordered_map<char, char> map;
        map[')'] = '(';
        map['}'] = '{';
        map[']'] = '[';
        for (char c : s) {
            if (map.count(c) == 0) {
                stack.push(c);
            } else {
                if (stack.empty() || stack.top() != map[c]) {
                    return false;
                }
                stack.pop();
            }
        }

        return stack.empty(); 
    }
};