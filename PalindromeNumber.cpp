class Solution {
public:
    bool isPalindrome(int x) {
        int ans = 0;
        int dup = x;
        while(x>0){
            int digit = x%10;
            if(ans > INT_MAX/10 || ans < INT_MIN/10){
                return false;
            }
            
            ans = (ans * 10) + digit;

            x = x/10;
        }

        if( dup == ans) {
            return true;
        }
        return false;
    }
};