class Solution {
public:
    
    void dfs(int i,int j, int intitalcolor,int newcolor,vector<vector<int>> & image)
    {
        int n=image.size();
        int m=image[0].size();
        
        if(i<0 || j<0)return ;
        if(i>=n || j>=m)return ;
        
        if(image[i][j]!=intitalcolor)return;
        
        image[i][j]=newcolor;
        
        
        dfs(i+1,j,intitalcolor,newcolor,image);
        dfs(i-1,j,intitalcolor,newcolor,image);
        dfs(i,j+1,intitalcolor,newcolor,image);
        dfs(i,j-1,intitalcolor,newcolor,image);
        
    }
    
    
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
       int intitalcolor=image[sr][sc];
        if(newColor!=intitalcolor)
            dfs(sr,sc,intitalcolor,newColor,image);
        
        
        
        return image;
        
    }
};