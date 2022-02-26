class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry =0;
        string k = "";
        int n1=num1.size()-1,n2=num2.size()-1;
        while(n1>=0 || n2>=0 || carry){
            int x = (n1>=0 ? (num1[n1]-'0') : 0)+(n2>=0 ?(num2[n2]-'0') : 0)+carry;
            carry = x/10;
            x= x%10;
            k+= to_string(x);
            n1--;
            n2--;
        }
        reverse(k.begin(),k.end());
        return k;
    }
};