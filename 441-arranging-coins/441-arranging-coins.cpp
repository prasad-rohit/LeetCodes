class Solution {
public:
    int arrangeCoins(int n) {
        int l=0,r=n,ans;
        
        long row,coinneed;
        while(l<=r){
            row = l + ((r-l)/2);
            coinneed = (row*(row+1))/2;
            
            if(coinneed <=n)  l = row+1, ans = row;
            else r= row-1;
        }
        
        return ans;
    }
};