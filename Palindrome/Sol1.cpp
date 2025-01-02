class Solution {
public:
    bool isPalindrome(int x) {

        bool ans {true};

        string fwd = to_string(x);
        string rv = fwd;
        reverse(rv.begin(), rv.end());
        ans = (fwd == rv);

        return ans;
        
    }
};
