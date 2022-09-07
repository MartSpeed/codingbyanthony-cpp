#include <iostream>
using namespace std;

int main()
{
  // getting user input

  // store the information we are requesting
double age;

// // prompt the user for the information we want
cout << "enter your age: ";
cin >> age;
cout << "you are " << age << " years young" <<endl;

//store and request a string of information
string name;
// getline grabs an entire line of text
cout << "enter your name: ";
// cin for input, name for the variables you want to use
getline(cin, name);
cout << "hello " << name;
  
  return 0;
}
