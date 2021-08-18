String is an array of characters

```
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
char greeting2[] = "Hello";
```

Helpful functions
```
strcpy(s1, s2); // Copies s2 into s1
s2 = s1;

strcat(s1, s2); // Concatenates aka adds s2 to s1
s2 = s1 + s2;

strlen(s1);     // Length of s1
s1.size();

strcmp(s1, s2); // compares. 0 if same. <0 if s1<s2. >0 if s1>s2
strchr(s1, ch); // returns first occurance of char ch in s1.
strstr(s1, s2); // return first occurance of s2 in s1.
```

Converting a string digit to int

```
string s = '123';
int digit = int(s[0]) - '0';

```
