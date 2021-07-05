class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> vertical;
        for(int i=0; i<points.size(); i++)
        {
            vertical.push_back(points[i][0]);
        }
        sort(vertical.begin(), vertical.end());
        int max=0;
        for(int i=1; i<points.size(); i++)
        {
            if(vertical[i]-vertical[i-1]>max)
                max=vertical[i]-vertical[i-1];
        }
        return max;
        
    }
};