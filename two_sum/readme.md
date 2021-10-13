Approach 1: Two pointers

+ Ensure you are searching for numbers in sorted array
+ And then finding indices in original array

+ To sort vectors -> sort(nums.begin(), nums.end());
+ To find number
```
auto it = find(nums_org.begin(), nums_org.end(), num_to_find);
int ind = int(it - nums_org.begin());
```

+ To find number from after the previous one
```
it = find(it, nums_org.end(), num_to_find);
int ind2 = int(it - nums_org.begin());
```

Approach 2: Hash map (unordered map)

