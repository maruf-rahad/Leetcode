class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') stk.push(s[i]);
            else if(s[i] == ')' && !stk.empty() && stk.top() == '(') stk.pop();
            else if(s[i] == '}' && !stk.empty() && stk.top() == '{') stk.pop();
            else if(s[i] == ']' && !stk.empty() && stk.top() == '[') stk.pop();
            else return false;
        }

        if(!stk.empty())return false;

        return true;

    }
};
