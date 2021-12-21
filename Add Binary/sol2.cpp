class Solution {
public:
    string addBinary(string a, string b) {
        
        string ans = "";
        int a_size = a.size(), b_size = b.size();
        
        // Padding to make both string same size
        
        if (a_size > b_size)
        {
            int diff = a_size - b_size;
            for (int ind = 0; ind < diff; ++ind)
            {
                b = "0" + b;
            }
        }
        else if (b_size > a_size)
        {
            int diff = b_size - a_size;
            for (int ind = 0; ind < diff; ++ind)
            {
                a = "0" + a;
            }
        }
        
        int carry = 0, sum = 0;
        char digit = '0';
        for (int ind = (max(a_size, b_size)-1); ind >= 0; --ind)
        {
            // Add both char & carry
            sum = carry;
            if (a[ind] == '1')
            {
                sum += 1;
            }
            
            if (b[ind] == '1')
            {
                sum += 1;
            }
            
            // Compute digit & carry
            if (sum == 0)
            {
                digit = '0';
                carry = 0;
            }
            else if (sum == 1)
            {
                digit = '1';
                carry = 0;
            }
            else if (sum == 2)
            {
                digit = '0';
                carry = 1;
            }
            else // sum = 3
            {
                digit = '1';
                carry = 1;
            }
            
            ans = digit + ans;
            
        }
        
        if (carry == 1)
        {
            ans = '1' + ans;
        }
        
        return ans;
        
    }
};
