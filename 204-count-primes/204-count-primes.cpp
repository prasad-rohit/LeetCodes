class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return 0;
        vector<bool> ct(n,true);
        ct[0] = false;
        ct[1] = false;
        
        for(int i=0;i<sqrt(n);i++){
            if(ct[i]){
                for(int j = i*i;j<n;j+=i){
                    ct[j] = false;
                }
            }
        }
        
        return count(ct.begin(),ct.end(),true);
    }
};

// if(n<=2) return 0;
        
//         int total = 0;
        
//         bool flag = false;
//         for(int i = 2;i<=n;i++){
//             flag = false;
//             for(int j =2;j<i;j++){
//                 if(i%j==0){
//                     flag = true;
//                     break;
//                 }
//             }
//             if(!flag) total++;
//         }
        
//         return total;