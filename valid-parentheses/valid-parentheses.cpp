class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        for(auto c : s)
        {
            switch(c)
            {
                case '(':
                    check.push(c);
                    break;
                case '{':
                    check.push(c);
                    break;
                case '[':
                    check.push(c);
                    break;
                case ')':
                    if(check.empty() || check.top()!='(')
                        return false;
                    check.pop();
                    break;
                case '}':
                    if(check.empty() || check.top()!='{')
                        return false;
                    check.pop();
                    break;
                case ']':
                    if(check.empty() || check.top()!='[')
                        return false;
                    check.pop();
                    break;
                default: ;
            }
        }
        return check.empty();
    }
};