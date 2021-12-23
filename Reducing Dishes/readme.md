Leetcode 1042 reducing dishes: https://leetcode.com/problems/reducing-dishes/

Method 1:
Sum of all dishes should be more than zero to reach max positive.
Sort them by worst to best dishes and keep reducing dishes (worst) till sum is >0.

Method 2:
Sort dishes worst to best.
Start from best dish only. [1st best dish] & compute satisfaction (cur_sat). Also compute cummulative sum (cum_sum)
Next add 2nd best dish [2nd, 1st] & compute satisfaction.
  (2nd * 1) + (1st * 2) => 2nd + 1st + 1st => satisfaction[ind] + cur_sat + cum_sum
  
next add 3rd best dish [3rd, 2nd, 1st]
  (3rd * 1) + (2nd * 2) + (1st * 3) => 3rd + 2nd + 2nd + 1st + 1st + 1st => 3rd + (2nd + 1st + 1st) + (2nd + 1st) => satisfaction[ind] + cur_sat + cum_sum
  
  
Keep track of max satsifaction level.
