#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  // array practice
  int luckyNums[6] = {4, 8 , 15, 16, 23, 42};
  cout << sizeof(luckyNums) << endl;
  // getting the length of the array
  // an array length in c++ is shown in bytes
  // to get how many elements inside of an array you need to divide the size of variable by the size of the integers variable
  int getArrayLength = sizeof(luckyNums) / sizeof(int);
  cout << getArrayLength;

  return 0;
}
