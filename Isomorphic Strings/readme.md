Problem: 205. Isomorphic Strings

Link: https://leetcode.com/problems/isomorphic-strings/

Solution:
+ Idea is to map letter to number.
+ Create map for s and t strings with all equal to zero.
+ Eg: 
  + "add" "foo"  
  + compare a and f. Both will be zero.
  + Mark a->1 and f->1.
  + Compare d and o. Not seen before, so will be zero
  + Mark d->2 and o->2.
  + Compare d and o. Seen before. Both will have same index number.
  + Mark d->3 and o->3

+ Eg: 
  + s = "foo", t = "bar"
  + compare f and t. Both will be zero
  + mark f->1 and t->1
  + compare o and a. Not seen before, so will be zero.
  + mark o->2 and a->2
  + compare o and r. O seen before and is marked 2. r not seen before and will be zero.
  + Return false.


+ Because we are mapping letters to numbers.
+ Any letter seen before should have same number.
+ If either letter from any words is seen before, it will have a different number.
