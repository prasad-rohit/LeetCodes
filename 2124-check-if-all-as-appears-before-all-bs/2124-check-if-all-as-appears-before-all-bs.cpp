class Solution {
public:
    bool checkString(string s) {
        std::size_t found = s.find("ba");
        if (found!=std::string::npos){
            return false;
        }
        
        return true;
    }
};