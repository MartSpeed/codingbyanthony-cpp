#include <iostream>

using namespace std;

// using data types

int main()
{
  // character variable
  char grade = 'A';
  cout <<grade<<endl;

  // character string
  string phrase = "the quick brown fox jumped over the lazy dog";
  cout <<phrase<<endl;
  cout<<"this is the length function for the string data type "<<phrase.length()<<endl;
  cout <<"this is the index of a string " <<phrase[14]<<endl;

  // assigning a new value to a string data type
  phrase[14] = 'H';
  cout<<"this is the modified phrase "<<phrase<<endl;

  //passing arguments/parameters
  cout <<"this is the phrase find function to tells us what index of string that we are looking for starts "<< phrase.find("dog", 12)<<endl;

  //phrase substring finder
  string phraseSub = phrase.substr(14,12);
  cout<<"this is the phrase substring function used as a string variable, it also takes two parameters "<< phraseSub<<endl;

  // character int, double, float
  int age = 35;
  double price = 35.99;
  float change = 9.99;
  bool fishIsYummy = true;

  cout<<"this is the age variable using an int data type: "<< age<< endl;
  cout<<"this is the price variable using the double data type: "<<price<<endl;
  cout<<"this is the change variable using the float data type: "<<change<<endl;
  cout<<"this is the fishIsYummy variable using the boolean data type: "<<fishIsYummy<<endl;

  return 0;
}
