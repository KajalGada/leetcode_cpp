class Solution {
public:
    bool isValid(string s) {
        
        int s_size = s.size();
        
        if ((s_size%2) != 0)
        {
            return false;
        }
        
        vector<char> stack;
        char ch, last_ch;
        int last_ind = 0;
        bool res = true;
         
        for (int ind = 0; ind < s_size; ++ind)
        {
            ch = s[ind];
            
            if (ch == '(')
            {
                stack.push_back(')');
            }
            else if (ch == '{')
            {
                stack.push_back('}');
            }
            else if (ch == '[')
            {
                stack.push_back(']');
            }
            else if (stack.size() > 0)
            {
                last_ind = stack.size() - 1;
                last_ch = stack[last_ind];
                
                if (ch == last_ch)
                {
                    stack.pop_back();
                }
                else
                {
                    res = false;
                    break;
                }
            }
            else
            {
                res = false;
                break;
            }
        }
        
        if (stack.size() > 0)
        {
            res = false;
        }
        
        return res;
        
    }
};
