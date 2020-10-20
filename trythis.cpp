#include "std_lib_facilities.h"
using namespace std;

int main()
{
  int num = 97;
  int num2 = 65;
 
  for(char a = 97; a <= 122; ++a) {
    cout << a << '\t' << num << '\n' << endl;
    ++num;
  }
  
  for(char A = 65; A <= 90; ++A) {
    cout << A << '\t' << num2 << '\n' << endl;
    ++num2;
  }

}
