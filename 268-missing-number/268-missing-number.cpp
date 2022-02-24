class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0,rsum=0;
        for(int i =1;i<=nums.size();i++){
            sum+=i;
        }
        
        for(int i =0;i<nums.size();i++){
            rsum+=nums[i];
        }
        
        return sum-rsum;
    }
};