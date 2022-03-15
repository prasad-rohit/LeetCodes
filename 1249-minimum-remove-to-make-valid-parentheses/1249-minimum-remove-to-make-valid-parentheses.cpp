class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count =0;
        
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }else if(s[i]==')'){
                if(count == 0){
                    s[i] = '#';
                }else{
                    --count;
                }
            }
        }
        count = 0;
        for(int i =s.size()-1;i>=0;i--){
            if(s[i]==')'){
                count++;
            }else if(s[i]=='('){
                if(count == 0){
                    s[i] = '#';
                }else{
                    --count;
                }
            }
        }
        
        string k;
        for(auto it:s){
            if(it!='#'){
                k+=it;
            }
        }
        
        return k;
    }
};
