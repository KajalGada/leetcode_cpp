class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        std::vector<int> ans;
        if (left == 0)
        {
            left += 1;
        }
        
        bool self_div = false;
        int digit = 0;
        int org_num = 0;
        
        for (int cur_num = left; cur_num <= right; cur_num++)
        {
            org_num = cur_num;
            self_div = true;
            while (org_num > 0)
            {
                digit = org_num % 10;
                if (digit == 0)
                {
                    self_div = false;
                }
                else if ((cur_num%digit) != 0)
                {
                    self_div = false;
                }
                org_num = org_num/10;
            }
            if (self_div == true)
            {
                ans.push_back(cur_num);
            }
        }
        
        return ans;
        
    }
};
