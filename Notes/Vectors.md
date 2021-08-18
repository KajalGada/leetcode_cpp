Dynamic list of items. Can shrink & grow in size. Hold items of same type only.

```
#include <vector>

std::vector<type> name;
std::vector<int> vec;
```

Initialize

```
std::vector<int> vec (9); // Num of elements 
std::vector<int> vec = {10, 20, 30, 40};
```

Adding and removing elements

```
vec.push_back(2);  // Adds 2 at end
vec.push_back(3);
vec.pop_back();
```

Size of a vector

```
std::cout << vec.size() << std::endl;
```

Reference by index

```
std::cout << vec[0];
```

Iterator

```
vec.begin();
vec.end();
auto it = vec.begin() + 2;
```

Minimum & Maximum

```
#include <algorithm>
std::min_element(vec.begin(), vec.end());
std::max_element(vec.begin(), vec.end());
```


Sorting vector

```
vector<int> nums;
sort (nums.begin(), nums.end());
```

Find element in vector

```
vector<int> nums = {1, 2, 3, 4, 1};
auto it = find(nums.begin(), nums.end(), 3);
if (it != nums.end())   // end means not found!
{
  int ind = int(it - nums.begin());
}

auto it2 = find(it+1, nums.end(), 1); // Finding number after a particular location. Good for finding duplicate.

```





