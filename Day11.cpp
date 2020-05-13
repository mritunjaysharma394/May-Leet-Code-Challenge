class Solution {
    
private:
    bool isValid(int r, int c, int prevColor, vector<vector<int>>& image) {
        return r < image.size() && c < image[0].size() && r >=0 && c >=0 && image[r][c] == prevColor;
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        queue<pair<int, int>> q;
        int xs[] = {0, 1, 0, -1};
        int ys[] = {1, 0, -1, 0};
        int prevColor = image[sr][sc];
        
        
        if(prevColor == newColor)
            return image;
        
        
        q.push({sr, sc});
        while(!q.empty()) {
            sr = q.front().first;
            sc = q.front().second;
            q.pop();
            image[sr][sc] = newColor;
            for(int i=0; i<=3; i++){
                if(isValid(sr + xs[i], sc + ys[i], prevColor, image)) {
                    q.push({sr + xs[i], sc + ys[i]});
                }
            }
        }
        
        return image;
    }
};