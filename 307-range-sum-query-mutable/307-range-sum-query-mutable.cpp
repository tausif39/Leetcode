class NumArray {
public:
    
    int n;
    
    vector<int> segtree;
    
    NumArray(vector<int>& nums) 
    {
        n=nums.size();
        segtree.resize(4*n);
        buildtree(0,0,n-1,nums);
    }
    
      void buildtree(int indx, int low, int high,vector<int>& nums)
      {
          if (low == high)
              {
                segtree[indx] = nums[low];

                return;
              }

          int mid = (low + high) >> 1;

          buildtree(2 * indx + 1, low, mid, nums);
          buildtree(2 * indx + 2, mid + 1, high, nums);

            segtree[indx] = segtree[2 * indx + 1] + segtree[2 * indx + 2];
        
     }
    
     
    int query(int indx, int low, int high, int l, int h)
    {
          if (h < low || l > high)
            return 0;

           if (l <= low && high <= h)
        return segtree[indx];

          int mid = (low + high) >> 1;
          int left = query(2 * indx + 1, low, mid, l, h);

          int right = query(2 * indx + 2, mid + 1, high, l, h);

          return left + right;
    }
    
   void updateTree(int indx, int low, int high, int idx, int val)
    { 
        if (low == high)
        {
            segtree[indx] = val;
            return;
        }
       
       

        int mid = (low + high) / 2;

      if(idx<=mid)
            updateTree(2 * indx + 1, low, mid, idx, val);
    
       else     updateTree(2 * indx + 2, mid + 1, high, idx, val);

        segtree[indx] = segtree[2 * indx + 1] + segtree[2 * indx + 2];
    
    }
    
    void update(int index, int val) 
    {
        updateTree(0, 0, n-1,index,val);
        
    }
    
    int sumRange(int left, int right) 
    {
        
        return query(0,0,n-1, left, right);
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */