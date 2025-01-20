Sliding window approach [Sol 2].

You start at index 0 and you current range is index 0 to index 0.

You take first jump, your range becomes all the index you can reach from this first jump.

Example = [2, 3, 1, 1, 4] => from index 0 you can jump to index 1 and 2 i.e. [3, 1]

Evaluate all these options to see what is the next range of indexes you can reach with second jump.

Example = [2, 3, 1, 1, 1] => from index 1 you can reach index 2, 3, 4 and from index 2 you can reach index 3. Since you could reach index 2 in previous jump, you will not count it in your next range. So your new range is index 3 and 4 i.e [1, 1]

You keep doing this until you reach end with a jump.
