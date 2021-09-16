class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto c : s)
        {
            switch(c)
            {
                case '(':
                    st.push(c);
                    break;
                case '[':
                    st.push(c);
                    break;
                case '{':
                    st.push(c);
                    break;
                case ')':
                    if(st.empty() || st.top()!='(')
                        return false;
                    st.pop();
                    break;
                case ']':
                    if(st.empty() || st.top()!='[')
                        return false;
                    st.pop();
                    break;
                case '}':
                    if(st.empty() || st.top()!='{')
                        return false;
                    st.pop();
                    break;
                default:
                    return false;
            }
        }
        
        if(st.empty())
                return true;
            return false;
    }
};