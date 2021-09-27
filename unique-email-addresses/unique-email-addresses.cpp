class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(auto e : emails)
        {
            string mail="";
            for(char c : e)
            {
                if(c=='+' || c=='@')
                    break;
                if(c=='.')
                    continue;
                mail+=c;
            }
            mail+=e.substr(e.find('@'));
            s.insert(mail);
        }
        return s.size();
    }
};