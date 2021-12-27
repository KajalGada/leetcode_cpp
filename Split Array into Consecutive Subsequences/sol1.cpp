class Solution {
public:
    bool isPossible(vector<int>& nums) {
        
        int nums_size = nums.size();
        
        if (nums_size < 3)
        {
            return false;
        }
        
        unordered_map<int, int> freq_map;
        int n = 0;
        
        for (int ind = 0; ind < nums_size; ++ind)
        {
            n = nums[ind];
            auto it = freq_map.find(n);
            if (it != freq_map.end())
            {
                freq_map[n] += 1;
            }
            else
            {
                freq_map[n] = 1;
            }
        }
        
        bool ans = true;
        
        unordered_map<int, int> hyp_map;
        
        for (int ind = 0; ind < nums_size; ++ind)
        {
            n = nums[ind];
            
            if (freq_map[n] > 0)
            {
                freq_map[n] -= 1;
                
                // Join exisiting subsequence?
                auto it = hyp_map.find(n);
                if ((it != hyp_map.end()) && (hyp_map[n] > 0))
                {
                    hyp_map[n] -= 1;
                    
                    // Next element for the subsequence
                    it = hyp_map.find(n+1);
                    if (it != hyp_map.end())
                    {
                        hyp_map[n+1] += 1;
                    }
                    else
                    {
                        hyp_map[n+1] = 1;
                    }
                }
                else
                {
                    // Can I make a sequence?
                    auto it2 = freq_map.find(n+1);
                    auto it3 = freq_map.find(n+2);
                    
                    if (((it2 != freq_map.end()) && (freq_map[n+1] > 0)) && ((it3 != freq_map.end()) && (freq_map[n+2] > 0)))
                    {
                        freq_map[n+1] -= 1;
                        freq_map[n+2] -= 1;
                        
                        // Next element for the subsequence
                        it = hyp_map.find(n+3);
                        if (it != hyp_map.end())
                        {
                            hyp_map[n+3] += 1;
                        }
                        else
                        {
                            hyp_map[n+3] = 1;
                        }
                        
                    }
                    
                    else
                    {
                        ans = false;
                        break;
                    }
                    
                }
            }
            
            
        }
        
        
        
        
        return ans;
        
    }
};
