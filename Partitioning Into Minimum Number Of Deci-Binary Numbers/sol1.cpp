class Solution {
public:
    int minPartitions(string n) {
        
        int max_digit = 0;
        int string_size = n.size();
        int ind = 0;
        
        while ((max_digit < 9) and (ind < string_size))
        {
            max_digit = max(max_digit, (int(n[ind]) - '0'));
            ind += 1;
        }
        
        return max_digit;
        
    }
};
