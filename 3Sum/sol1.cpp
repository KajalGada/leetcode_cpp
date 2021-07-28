class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> sol;
        int size_nums = nums.size();
        
        if (size_nums > 2)
        {
            
            // Sort
            sort(nums.begin(), nums.end());
            
            // for (int ind = 0; ind < size_nums; ++ind)
            // {
            //     std::cout << nums[ind] << " ";
            // }
            // std::cout << std::endl;
            
            // 3 pointers
            int ind_0 = 0, ind_1 = 0, ind_2 = 0;
            int num_0 = nums[0], num_1 = 0, num_2 = 0, sum = 0;
            
            while (ind_0 < (size_nums-2))
            {
                // 2 pointer approach
                ind_1 = ind_0 + 1;
                ind_2 = size_nums - 1;
                
                while (ind_1 < ind_2)
                {
                    num_1 = nums[ind_1];
                    num_2 = nums[ind_2];
                    
                    // std::cout << num_0 << " " << num_1 << " " << num_2 << std::endl;
                    // std::cout << ind_0 << " " << ind_1 << " " << ind_2 << std::endl;
                    
                    sum = num_0 + num_1 + num_2;
                    
                    // std::cout << "sum: " << sum << std::endl;
                    
                    // If sum 0, found solution
                    if (sum == 0)
                    {
                        vector<int> triplet = {num_0, num_1, num_2};
                        sol.push_back(triplet);
                        
                        // Iterate to find another solution with same pointer 0
                        
                        // Increase ind_1
                        ind_1 += 1;
                        while ((ind_1 < size_nums) and (nums[ind_1] == num_1))
                        {
                            ind_1 += 1;
                        }
                        
                        // Decrease ind_2
                        ind_2 -= 1;
                        while ((ind_2 > 0) and (nums[ind_2] == num_2))
                        {
                            ind_2 -= 1;
                        }
                        
                    }
                    
                    // Sum too high, decrease larger number
                    else if (sum > 0)
                    {
                        
                        // Decrease ind_2
                        ind_2 -= 1;
                        while ((ind_2 > 0) and (nums[ind_2] == num_2))
                        {
                            ind_2 -= 1;
                        }
                        
                    }
                    
                    // Sum too low, increment smaller number
                    else
                    {
                        // Increase ind_1
                        ind_1 += 1;
                        while ((ind_1 < size_nums) and (nums[ind_1] == num_1))
                        {
                            ind_1 += 1;
                        }
                        
                    }
                    
                    
                }
                
                // Loop to next unique number
                ind_0 += 1;
                while ((ind_0 < size_nums-2) and (nums[ind_0] == num_0))
                {
                    ind_0 += 1;
                }
                num_0 = nums[ind_0];
                
            }
            
        }
        
        return sol;
        
    }
};
