class Solution {
public:
    string addBinary(string a, string b) {
        
        string res = "";
        
        int ind_a = a.size() - 1;
        int ind_b = b.size() - 1;
        int carry = 0;
        int sum = 0;
        string digit = "";
        
        while ((ind_a >= 0) or (ind_b >= 0))
        {
            sum = carry;
            if ((ind_a >= 0) and (a[ind_a] == '1'))
            {
                sum += 1;
            }
            
            if ( (ind_b >= 0) and (b[ind_b] == '1'))
            {
                sum += 1;
            }
            
            if (sum == 3)
            {
                carry = 1;
                digit = '1';
            }
            else if (sum == 2)
            {
                carry = 1;
                digit = '0';
            }
            else if (sum == 1)
            {
                carry = 0;
                digit = '1';
            }
            else
            {
                carry = 0;
                digit = '0';
            }
            
            res = digit + res;
            
            ind_a -= 1;
            ind_b -= 1;
        }
        
        if (carry == 1)
        {
            res = '1' + res;
        }
        
        return res;
        
    }
};
