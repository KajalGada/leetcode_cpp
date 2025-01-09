class Solution {
public:
    string addBinary(string a, string b) {

        string ans {""};
        int carry{0};
        int ind_a = a.size() - 1;
        int ind_b = b.size() - 1;

        while ( (ind_a >= 0) || (ind_b >= 0) || (carry == 1) )
        {
            if ( (ind_a >= 0) && (a[ind_a] == '1') )
            {
                carry += 1;
            }

            if ( (ind_b >= 0) && (b[ind_b] == '1') )
            {
                carry += 1;
            }

            ind_a -= 1;
            ind_b -= 1;

            ans += to_string(carry % 2);
            carry /= 2;

        }

        reverse(ans.begin(), ans.end());

        return ans;
        
    }
};
