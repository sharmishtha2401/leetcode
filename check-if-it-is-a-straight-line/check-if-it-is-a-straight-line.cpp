class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& points) {
        int x=points[1][0]-points[0][0];
        int y=points[1][1]-points[0][1];
        for(int i=2; i<points.size(); i++)
        {
            auto p=points[i];
            if( x*(p[1] - points[0][1]) != y*(p[0] - points[0][0]) )
			return false;
        }
        return true;
        
    }
};