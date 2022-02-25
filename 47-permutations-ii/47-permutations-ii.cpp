class Solution {
public:
    void dfs(vector<vector<int>>& res,vector<int>& curr,vector<int> &nums,unordered_map<int,int>& mp){
        if(curr.size()== nums.size()){
            res.push_back(curr);
            return;
        }
        
        for(auto& [num, freq] : mp){
            if(freq==0) continue;
            curr.push_back(num);
            freq--;
            dfs(res,curr,nums,mp);
            curr.pop_back();
            freq++;
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto it: nums){
            mp[it]++;
        }
        
        vector<vector<int>> res;
        vector<int> curr;
        
        dfs(res,curr,nums,mp);
        return res;
    }
};