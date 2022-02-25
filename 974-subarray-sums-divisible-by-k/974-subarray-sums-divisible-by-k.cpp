class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> res(k);
        int fr = 0,ans = 0;
        
        res[fr]++;
        
        for(int i =0;i<nums.size();i++){
            fr = (fr+nums[i])%k;
            
            if(fr<0) fr+=k;
            
            ans += res[fr];
            res[fr]++;
        }
        
        return ans;
    }
};