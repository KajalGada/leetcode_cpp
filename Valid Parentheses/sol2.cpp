class Solution {
public:
    bool isValid(string s) {

        vector<char> stack;
        bool ans = true;
        int size_s = s.size(), ind = 0;
        char ch, last_ch;

        while( ans && (ind<size_s) )
        {
            ch = s[ind];

            if ( ch == '(' || ch == '{' || ch == '[' )
            {
                stack.push_back(ch);
            } 
            else if (stack.size() > 0)
            {

                last_ch = stack[stack.size()-1];

                if ( last_ch == '(' && ch == ')')
                {
                    stack.pop_back();
                }
                else if ( last_ch == '[' && ch == ']')
                {
                    stack.pop_back();
                }
                else if ( last_ch == '{' && ch == '}')
                {
                    stack.pop_back();
                }
                else
                {
                    ans = false;
                }
            }
            else
            {
                ans = false;
            }

            ++ind;
        }

        if (stack.size() > 0)
        {
            ans = false;
        }


        return ans;
        
    }
};
