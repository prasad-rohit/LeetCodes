class Solution {
public:
    int compareVersion(string version1, string version2) {
        int s1 =0,s2=0;
        
        while(s1<version1.size() || s2<version2.size()){
            int d1=0,d2 =0;
            
            while(s1<version1.size() && version1[s1]!='.'){
                d1= d1*10 + (version1[s1]-'0');
                s1++;
            }
            while(s2<version2.size() && version2[s2]!='.'){
                d2= d2*10 + (version2[s2]-'0');
                s2++;
            }
            
            if(d1 < d2) return -1;
            else if(d1 > d2) return 1;
            
            s1++;
            s2++;
        }
        
        return 0;
    }
};