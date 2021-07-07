class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]!=color)
            change(image, sr, sc, image[sr][sc], color);
        return image;
    }


    void change(vector<vector<int>>& image, int i, int j, int og, int color)
    {
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=og)
            return;
        image[i][j]=color;
        change(image,i,j+1,og,color);
        change(image,i,j-1,og,color);
        change(image,i+1,j,og,color);
        change(image,i-1,j,og,color);
    }
    
    
};