class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        queue<int> q1, q2;
        for(auto c : s)
        {
            q1.push(c);
        }
        for(auto c : goal)
        {
            q2.push(c);
        }
        int i=0; 
        int n=s.size();
        while(i<n)
        {
            if(q1==q2)
                return true;
            
            q2.push(q2.front());
            q2.pop();
            i++;
        }
        return false;
    }
};

/*
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()==goal.size() && (s+s).find(goal)!=string::npos)
            return true;
        return false;
    }
};
*/
