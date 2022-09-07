#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  // array practice
  int luckyNums[] = {4, 8 , 15, 16, 23, 42};
  cout << sizeof(luckyNums) << endl;
  // getting the length of the array
  // an array length in c++ is shown in bytes
  // to get how many elements inside of an array you need to divide the size of variable by the size of the integers variable
  int getArrayLength = sizeof(luckyNums) / sizeof(int);
  cout << getArrayLength<<endl;
  cout << "this is the 3rd element in the array " << luckyNums[3]<<endl;
  cout << "this is the 5th element in the array " << luckyNums[5]<<endl;
  // adding array elements together
  cout << "the sum of the 3rd and 5th element in the array = " << luckyNums[3] + luckyNums[5] << endl;

  return 0;
}
