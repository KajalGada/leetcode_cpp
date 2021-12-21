Leetcode problem link: https://leetcode.com/problems/employee-importance/

Approach:
+ Convert employee list to unordered map
+ Look at employee id given and add importance.
+ Look at given employee subordinate & their subordinates. DFS or BFS.

C++ things to remember:
+ unordered_map<int, employee*> map;
+ vector.back() => gives last element
+ vector.pop_back() => removes last element
+ vector1.insert(vector1.end(), v2.begin(), v2.end()); // Combines 2 vectors into first one.
