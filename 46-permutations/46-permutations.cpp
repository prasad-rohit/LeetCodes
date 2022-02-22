class Solution {
public:
    void print(vector<int>& nums,int start, vector<vector<int>>& res){
        if(start>=nums.size()){
            res.push_back(nums);
            return;
        }
        
        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            print(nums,start+1,res);
            swap(nums[start],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        print(nums,0,res);
        return res;
    }
};