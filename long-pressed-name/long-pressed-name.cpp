class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=typed.size();
        int j=0;      
        for(int i=0; i<n; i++)
        {
            if(typed[i]==name[j])
            {
                j++;
            }
            
            else if(!i || typed[i]!=typed[i-1])
                return false;
        }
        
        return j==name.size();
    }
};