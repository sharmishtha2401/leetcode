class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int v1, v2;
        int sum=0;
        for(string s : ops)
        {
            if(s=="C")
            {
                
                st.pop();
            }
            
            else if(s=="D")
            {
                st.push(st.top()*2);
               
            }
            else if(s=="+")
            {
                v1=st.top();
                st.pop();
                v2=st.top();
                st.push(v1);
                st.push(v1+v2);
                
            }
            else
            {
                st.push(stoi(s));
                
            }
        }
        
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
        
    }
};