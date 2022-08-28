class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    int j, m=mat.size(), n=mat[0].size(), k, temp;
    vector<int>v; int l=1;
        
    for(int i=0; i<m; i++)
    {
        j=0; temp=i;
        while(i<m && j<n) v.push_back(mat[i++][j++]);
        sort(begin(v), end(v));
        k=0; i=temp; j=0;
        while(i<m && j<n)  mat[i++][j++]=v[k++];
        v.clear(); i=temp;
    }
        
    for(int i=1; i<n; i++)
    {
        j=0; temp=i;
        while(i<n && j<m) v.push_back(mat[j++][i++]);
        sort(begin(v), end(v));
        k=0; i=temp; j=0;
        while(i<n && j<m)  mat[j++][i++]=v[k++];
        v.clear(); i=temp;
    }
        
    return mat;
        
}

};