class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> top(7), bot(7), same(7);
        for(int i=0; i<tops.size(); i++)
        {
            top[tops[i]]++;
            bot[bottoms[i]]++;
            if(tops[i]==bottoms[i])
                same[tops[i]]++;
        }
        
    
        for(int i=1; i<7; i++)
        {
            if(top[i]+bot[i]-same[i]>=tops.size())
            {
                return tops.size()-max(top[i], bot[i]);
            }
        }
        
        return -1;
    }
};