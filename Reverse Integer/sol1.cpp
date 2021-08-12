class Solution {
public:
    int reverse(int x) {
        
        int ans = 0;
        int digit = 0;
            
        int max_limit = INT_MAX/10;
        int min_limit = INT_MIN/10;
        
        while (x != 0)
        {
            // Get last digit
            digit = x % 10;
            x = int(x/10);
            
            // Check if we are within int limits before adding last digit
            if ((ans > max_limit) or (ans < min_limit))
            {
                ans = 0;
                break;
            }
            ans *= 10;
            
            if ((ans > 0) and ((INT_MAX - ans) < digit))
            {
                ans = 0;
                break;
            }
            
            else if ((ans < 0) and ((INT_MIN - ans) > digit))
            {
                ans = 0;
                break;
            }       
            ans += digit;
        }
        
        return ans;
        
    }
};
