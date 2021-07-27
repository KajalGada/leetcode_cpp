Declaring an array:

`type name[elements];`

`int foor[5];`

Initialing values during declaration:

`int foo[5] = {1, 2, 3, 4, 5};`

`int foo[5] = {1, 2, 3};  // Rest will get default value of zero`

`int foo[5] = {};         // All will get default value of zero`

It will create an array size of 3 by calculating num of elements inside {}

`int foo[] = {1, 2, 3};  `

Accessing array

`foo[2] = 2;`

`int x = foo[0];`

Remember array index goes from 0 to (length - 1).

2D array:

`int matrix[2][3];`

`matrix[1][2] = 5;`

Array is passed by address so keep one empty bracket

 `void printarr(int arr[])`
 `void printarr(int arr[][2])`
 
 The array library. Pay attention to declaration!
 
 ```
 #include <arrary>
 
 int main()
 {
  array<int, 3> myarr {10, 20, 30};
  std::cout << myarr.size() << std::endl;
  return 0;
 }
 
 
 ```
