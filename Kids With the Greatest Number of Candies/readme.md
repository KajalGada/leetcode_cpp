Problem: Kids With the Greatest Number of Candies

Problem Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

Solution:
+ First find max num of candies amongst all kids.
+ Then for each kid check if their candy + extra candy >= max.

Difference between sol1 and sol2 is how I compute max.

```
int max_candies = *max_element(candies.begin(), candies.end()); 
```

OR

```
auto max_candies_itr = max_element(candies.begin(), candies.end());
int max_candies = candies[distance(candies.begin(), max_candies_itr)];
```
