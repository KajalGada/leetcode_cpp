Leetcode problem link: https://leetcode.com/problems/split-array-into-consecutive-subsequences/

Greedy approach. Frequency Map and Hypotherical Map

Create frequency map of all numbers.

start with one number, can it join an exisiting sequence? Then add there and mark what is the next number this exisiting sequence can take?

Can't join an exisiting subsequence, then check can make your own subsequence? If yes great, else ans = False
