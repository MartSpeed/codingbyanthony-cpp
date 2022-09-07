#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // working with numbers
  cout << 40 % 4;

  int wNum = 5;
  double dNum = 5.5;

  wNum++;
  cout<<wNum<<endl;

  wNum += 80;
  cout<<wNum<<endl;

  cout << pow(2,5)<<endl;

  cout << sqrt(36)<<endl;

  cout << round(4.3)<<endl;

  cout << round(4.5)<<endl;

  cout << ceil(4.1)<< endl;

  cout << floor(6.9) << endl;

  // fmx returns the bigger of two numbers as a result
  cout << fmax(3,10)<<endl;

  return 0;
}
