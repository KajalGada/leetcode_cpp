Queue

Queue is first in first out (FIFO).

To create a queue
```
queue<int> q;
```

To add elements, use push 
```
q.push(1);
q.push(2);
```

To see elements, use front & back. This allows you to see but doesn't remove the element
```
std::cout << q.front();
std::cout << q.back();
```

To remove, use pop. Removes from front of queue. This removes & doesn't give it back to you.
```
q.pop();
```


```
quque<int> q;     
// q = {}

q.push(1); 
// q = {1}

q.push(2); 
// q = {2}

std::cout << q.front();
// 1  q = {1, 2}

q.push(3);
// q = {1, 2, 3}

std::cout << q.front();
// 1  q = {1, 2, 3}

q.pop();
// q = {2, 3}

std::cout << q.front();
// 2  q = {2, 3}


std::cout << q.back();
// 3  q = {2, 3}


```

Convert vector to queue
```
vector<int> v = {1, 2, 3};
queue<int> q;

for (const int &e: v)
{
  q.push(e);
}
```
