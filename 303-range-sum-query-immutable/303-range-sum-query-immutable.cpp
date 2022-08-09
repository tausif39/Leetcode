class NumArray {
public:
    int n;
    vector<int> seg;
    
    int getSum(int index, int segStart, int segEnd, int queryStart, int queryEnd){ //index - index of current segement, 
        //segStart and segEnd - range of values this segment has summed up
        //queryStart queryEnd - query left and right indexs
        
        if(queryStart<=segStart && queryEnd>=segEnd){//if our seg completely overlaps with the query range
            return seg[index];
        }
        
        if(segStart>queryEnd || segEnd<queryStart){// our segment does not overlap with the queryrange
            return 0;
        }
        
        //if it overlaps partially we will break down the segment down again
        int mid = segStart + (segEnd-segStart)/2;
        int ans = getSum(index*2+1, segStart, mid, queryStart, queryEnd) + 
            getSum(index*2+2, mid+1, segEnd, queryStart, queryEnd); //searching in left and right
        return ans;
        // return 0;
        
    }
    
    int constructSegementTree(vector<int>&nums, int index, int start, int end){
        if(start == end){ // leaf node
            seg[index] = nums[start];
            // cout<<seg[index]<<endl;
            return seg[index];
        }
        
        //we will divide the array into two parts and recursively store the total sum in our node
        
        int mid = start+(end-start)/2;
        seg[index] = constructSegementTree(nums, 2*index+1, start, mid); //left sise
        seg[index] += constructSegementTree(nums, 2*index+2, mid+1, end); //right sise
        // cout<<seg[index]<<endl;
        return seg[index]; //return the sum store in this node as this is the sum of the subpart of its parent node.
    }
    
    NumArray(vector<int>& nums) {
        n = nums.size();
        
        int x = ceil(log2(n));//height of the segment tree
        int size = 2 * (int)(pow(2, x)) - 1; //size of segment tree
        
        seg.resize(size, 0);
        
        constructSegementTree(nums, 0, 0, n-1);
        // for(auto i: seg){
        //     cout<<i<<" ";
        // }cout<<endl;
    }
    
    int sumRange(int left, int right) {
        return getSum(0, 0, n-1, left, right);
    }
};
