class Solution {
public:
    int reverse(int x) {
        
        int ans = 0;
        int digit = 0;
            
        int max_limit = INT_MAX/10;
        int min_limit = INT_MIN/10;
        
        while (x != 0)
        {
            
            // Get the last digit. Multiply exisiting answer by 10 & then add the digit
            digit = x % 10;
            x = int(x/10);
            
            /*
            Check if we can multiply by 10. 
            (ans * 10) <= max_limit
            ans <= (max_limit)/10
            In other words, if ans > max_limit/10, ans = 0
            */
            
            if ((ans > max_limit) or (ans < min_limit))
            {
                ans = 0;
                break;
            }
            ans *= 10;
            
            /* 
            Check if we can add next digit.
            (ans + digit) <= max_limit
            digit <= max_limit - ans
            In other words, if digit > max_limit - ans, ans = 0
            */
            
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
