class Solution {
public:
    long long maxStrength(vector<int>& nums) 
    {
        
        vector<int> pos,neg;
        
        long long ans=1;
        
        for(auto it :nums)
        {
            if(it>0)ans*=(long long)it;
            else neg.push_back(it);
         }
        
        // sort(pos.begin(),pos.end());
        
        
        
        sort(neg.begin(),neg.end());
        
        
        // for(itni 9)
   
            
//         for(auto it :neg)
//         {
//             cout<<it<<" ";
            
        // }
        
        
        // if(neg.size()==0)return ans;
        
        if(neg.size()==0)
        {
            return ans;
            
        }
        
        long long last=neg[0];
        
        long long ans_neg=neg[0];
 
        for(int i=1;i<neg.size();i++)
        {
            last*=neg[i];
            if(ans_neg<last)ans_neg=last;
 
        }
        
        // cout<<ans_neg<<endl;
        // cout<<ans;
        
       
        
        if(neg.size()==nums.size())
        {
            return ans_neg;
            
        }
        
        
        
        
        long long final_ans=1;
        
        
        if(final_ans<ans_neg)final_ans=ans_neg;
        if(final_ans<ans)final_ans=ans;
        
        ans*=ans_neg;
        
        if(final_ans<ans)final_ans=ans;
        
        return final_ans;
        
        
    }
};