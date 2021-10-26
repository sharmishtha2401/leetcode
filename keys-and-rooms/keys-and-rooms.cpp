class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> st;
        st.push(0);
        unordered_set<int> s={0};
        while(!st.empty())
        {
            int i=st.top();
            st.pop();
            for(int j=0; j<rooms[i].size(); j++)
            {
                int key=rooms[i][j];
                if(s.count(key)==0)
                {
                    st.push(key);
                    s.insert(key);
                    if(s.size()==rooms.size())
                        return true;
                }
            }
        }
        return s.size()==rooms.size();
    }
};