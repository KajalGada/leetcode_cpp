class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        
        unordered_map<int, int> balls_map;
        int max_balls = 1, n = 0, tot = 0;
        
        for (int ind = lowLimit; ind <= highLimit; ++ind)
        {
            n = ind;
            tot = 0;
            while (n > 0)
            {
                tot += (n%10);
                n = n/10;
            }
            
            auto it = balls_map.find(tot);
            if (it != balls_map.end())
            {
                balls_map[tot] += 1;
                max_balls = max(max_balls, balls_map[tot]);
            }
            else
            {
                balls_map[tot] = 1;
            }
        }
        
        return max_balls;
            

        
    }
};
