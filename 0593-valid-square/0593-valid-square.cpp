class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        set<int> s;
        int p1p2 = (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]);
        int p1p3 = (p1[0]-p3[0])*(p1[0]-p3[0]) + (p1[1]-p3[1])*(p1[1]-p3[1]);
        int p1p4 = (p1[0]-p4[0])*(p1[0]-p4[0]) + (p1[1]-p4[1])*(p1[1]-p4[1]);
        int p2p3 = (p2[0]-p3[0])*(p2[0]-p3[0]) + (p2[1]-p3[1])*(p2[1]-p3[1]);
        int p2p4 = (p2[0]-p4[0])*(p2[0]-p4[0]) + (p2[1]-p4[1])*(p2[1]-p4[1]);
        int p3p4 = (p3[0]-p4[0])*(p3[0]-p4[0]) + (p3[1]-p4[1])*(p3[1]-p4[1]);
        //Insert the values in a set, if it were to be a square, then possible 
		//values could be only side length and diagonal.
        s.insert(p1p2); s.insert(p1p3); s.insert(p1p4); s.insert(p2p3); s.insert(p2p4); s.insert(p3p4); 
		//Just make sure that no two points are same (Edge case), as no square could be formed.
        return (p1!=p2 && p1!=p3 && p3!=p4 && p1!=p4 && p2!=p3 && p2!=p4 && s.size()==2);
        
    }
};