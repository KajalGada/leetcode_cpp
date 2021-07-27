Problem: https://leetcode.com/problems/number-of-good-pairs/

Solution 1:
+ Array of all possible numbers (1 to 100).
+ Count each time a number appears.
  + 1 -> 0 pairs
  + 2 -> 1 pair
  + 3 -> 2 more pairs

+ In other words, (count - 1) new pairs
+ Loop through list of nums. For each number, update the count
+ And also update the new pairs found.

