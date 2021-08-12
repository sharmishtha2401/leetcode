class Solution {
public:
    string sortSentence(string s) {
        vector<string> pos(10,"");
        for(int i=0; i<s.size(); i++)
        {
            int j=i;
            string temp="";
            while(!isdigit(s[j]))
            {
                temp+=s[j];
                j++;
            }
            pos[s[j]-'0']=temp;
            i=j+1;
        }
        
        string res="";
        for(int i=1; i<10; i++)
        {
            if(pos[i].size()>0)
            {
                res+=pos[i];
                res+=" ";
            }
        }
        res.pop_back();
        return res;
    }
};