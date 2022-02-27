class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        // if(s.size()==0)return 0;
        // if(s.size()==1)return 1;
    	 unordered_map<char , int > mp ;
    	 int maxii=0;
    	 	int j=0;
    	 for (int i = 0; i < s.size(); ++i)
    	 {
    	 	mp[s[i]]++;
    	 	

    	 	if(mp[s[i]]==2)
    	 	{
                while(mp[s[i]]==2)
                {
                    
                     maxii=max(abs(j-i),maxii);
                     --mp[s[j]];
                     j++;
                }
                                
//     	 		 for (j ; j < i; ++j)
// 		    	 {
// 		    	 	--mp[s[j]];
		    	 		
// 		    	 }

    	 	}
             
             maxii=max(abs(j-i)+1,maxii);

    	 	

    	 }
        
    	 return maxii;
    }

};    