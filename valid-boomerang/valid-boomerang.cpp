class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
        return((0.5*(p[0][0]*(p[1][1]-p[2][1]) + p[1][0]*(p[2][1]-p[0][1]) + p[2][0]*(p[0][1]-p[1][1])))!=0);
    }
};

/*
Formula for area of triangle is : 
0.5 * [x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)]
 if area of triangle is 0,  three points are collinear
 */
