class Solution {
public:
    int countOrders(int n) {
        long long sum = 3,mod = 1e9+7;
        long long ans = 1;
        
        for(int i=2;i<=n;i++){
            int find = (sum)*(sum+1)%mod/2;
            ans= ans*find%mod;
            sum+=2;
        }
        
        return ans%mod;
    }
};