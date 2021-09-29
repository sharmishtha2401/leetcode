class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> points = {p1, p2, p3, p4};
        set<double> len;
        for(int i=0; i<points.size(); i++)
        {
            for(int j=i+1; j<points.size(); j++)
            {
                double curlen=calc_len(points[i], points[j]);
                if(curlen!=0)
                    len.insert(curlen);
                else
                    return false;
            }
        }
        return len.size()==2;
        
    }
    
    double calc_len(vector<int>& a, vector<int>& b)
        {
            return sqrt((b[0]-a[0])*(b[0]-a[0])+(b[1]-a[1])*(b[1]-a[1]));
        }
};