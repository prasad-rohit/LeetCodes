class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0,pre = 0;
        
        map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            sum  = (sum+nums[i])%k;
            if(mp[sum]) return true;
            mp[pre]++;
            pre = sum;
        }
        
        return false;
    }
};