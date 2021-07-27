class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int check=0;
        for(int i=left; i<=right; i++)
        {
            bool found=false;
            for(int j=0; j<ranges.size(); j++)
            {
                if(i>=ranges[j][0] && i<=ranges[j][1])
                {
                    found=true;
                    break;
                }
            }
            if(found)
                check++;
        }
        
        if(check==(right-left+1))
            return true;
        return false;
    }
};