+ Count num of different characters from left to right
+ Eg: aabc -> [1, 1, 2, 3]
+ This says if we just have string "a" it is 1 different characters. "aa" has 2, "aab" has 3.
+ To keep count of occurance of each character, we use hash map.

+ Then count num of different characters from right to left
+ Eg: aabc -> [3, 3, 2, 1]
+ This says "aabc" has 3, "abc" has 3, "bc" has 2 and "c" has 1 different character.

+ Now lets look at different split combinations.
+ For this we go as "a" vs "abc", "aa" vs "bc", etc.

+ Our left count has "a" then "aa"..
+ Our right count has (ignore first one) "abc" then "bc" ...

So we can simply compare count_left[ind] and count_right[ind+1] for number of different characters.

