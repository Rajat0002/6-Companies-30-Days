class Solution {
public:
    void cal(int ind,int k,int n,vector<int> & v,vector<vector<int>> & ans){
        if(k==0){
            if(n==0){
                ans.push_back(v);
            }
            return;
        }
        for(int i=ind; i<10; i++){
            if(i>ind && i==ind || ind>n){
                return;
            } 
            v.push_back(i);
            cal(i+1,k-1,n-i,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v;
        vector<vector<int>> ans;
        
        cal(1,k,n,v,ans);
        return ans;
    }
};