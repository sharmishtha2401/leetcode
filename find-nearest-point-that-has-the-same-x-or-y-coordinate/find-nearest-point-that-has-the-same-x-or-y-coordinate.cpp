class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min=10000;
        int index=-1;
        for(int i=0; i<points.size(); i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                int md=abs(x-points[i][0])+abs(y-points[i][1]);
                if(md<min)
                {
                    min=md;
                    index=i;
                }
            }
        }
        return index;
        
    }
};