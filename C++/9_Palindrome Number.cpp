class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int dst = 0, var = 0;;
        int src = x;
        while(src > 0){
            var = src % 10;
            dst = dst * 10 + var;
            src /= 10;
        }
        if(dst != x)
            return false;
        return true;
    }
};