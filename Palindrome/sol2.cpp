class Solution {
public:
    bool isPalindrome(int x) {

        bool ans {true};

        long long int rev = 0, x2 = x;

        while (x2 > 0)
        {
            rev = (rev * 10) + (x2 % 10);
            x2 = x2/10;
        }

        ans = (x == rev);

        return ans;
        
    }
};
