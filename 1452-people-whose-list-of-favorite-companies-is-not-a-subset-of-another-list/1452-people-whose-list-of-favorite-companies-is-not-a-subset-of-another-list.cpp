class Solution {
public:
    
    vector<int> peopleIndexes(vector<vector<string>>& favoriteCompanies) {
        unordered_map<string,int> mp;
        int sz=favoriteCompanies.size(),id=1;
        
		//provide(assign) each different company a different integer id
        for(int i=0;i<sz;++i){
            int temp=favoriteCompanies[i].size();
            for(int j=0;j<temp;++j){
                if(mp[favoriteCompanies[i][j]]) continue;
                mp[favoriteCompanies[i][j]]=id++;
            }
            sort(favoriteCompanies[i].begin(),favoriteCompanies[i].end());
        }
        
        vector<int> res;
		//check the given set of company is subset of another set of company or not
        for(int i=0;i<sz;++i){
            int l1,l2,sz1=favoriteCompanies[i].size(),sz2,flag=1;
            for(int j=0;j<sz;++j){
                l1=0 ,l2=0 ,sz2=favoriteCompanies[j].size();
                if(i==j || sz1>sz2) continue;
                
                while(l1<sz1 && l2<sz2){
                    if(favoriteCompanies[i][l1]==favoriteCompanies[j][l2]) l1++;
                    l2++;
                }
                if(l1==sz1) {
                    flag=0;
                    break;
                }
            }
            if(flag) res.push_back(i);
        }
        return res;
    }
};
