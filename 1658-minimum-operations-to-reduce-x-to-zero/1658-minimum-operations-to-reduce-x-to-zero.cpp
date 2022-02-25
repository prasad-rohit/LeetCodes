class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int tsum = 0;
        for(auto it:nums) tsum+=it;
        
        tsum -= x;
        if(tsum==0) return nums.size();
        
        int sum = 0;
        int i=0,j,len=0;
        for(j=0;j<nums.size();j++){
            sum+= nums[j];
            
            while(i<nums.size() && sum>tsum){
                sum-=nums[i++];
            }
            
            if(sum == tsum){
                len = max(len,j-i+1);
            }
        }
        
        if(!len) return -1;
        return nums.size()-len;
    }
};