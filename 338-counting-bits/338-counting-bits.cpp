class Solution {
public:
    int countb(int n){
        int ct = 0;
        
        while(n>0){
            ct++;
            n = n&(n-1);
        }
        
        return ct;
    }
    
    vector<int> countBits(int n) {
        vector<int> res;
        
        for(int i =0;i<=n;i++){
            int x = countb(i);
            res.push_back(x);
        }
        
        return res;
    }
};