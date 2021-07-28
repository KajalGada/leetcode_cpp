class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        // Find max candies
        int max_candies = candies[0];
        int size_candies = candies.size();
        for (int ind = 1; ind < size_candies; ++ind)
        {
            max_candies = max(candies[ind], max_candies);
        }
        
        // std::cout << max_candies << std::endl;
        vector<bool> sol (size_candies);
        for (int ind = 0; ind < size_candies; ++ind)
        {
            if ((candies[ind] + extraCandies) >= max_candies)
            {
                sol[ind] = true;
            }
            else
            {
                sol[ind] = false;
            }
        }
        
        return sol;
        
    }
};
