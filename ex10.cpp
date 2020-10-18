#include "std_lib_facilities.h"
using namespace std;

int main()
{
  string operation;
  double num1, num2;

  cout << "Please enter an operation" << endl;
  cin >> operation; 
  cout << "Please enter a number: " << endl;
  cin >> num1;
  cout << "Please enter another number: " << endl;
  cin >> num2;
      if(operation == "+"|| operation == "plus")
      cout << "The sum is: " << num1 + num2 << endl;
      else if(operation == "-"|| operation == "minus")
      cout << "The difference is: " << num1 - num2 << endl;
      else if(operation == "*" || operation == "mul")
      cout << "The product is: " << num1 * num2 << endl;
      else if(operation == "/" || operation == "div")
      cout << "The remainder is: " << num1 / num2 << endl;
    
  }
  
