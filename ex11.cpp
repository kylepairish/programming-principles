#include "std_lib_facilities.h"
using namespace std;

int main()
{

  double p, n, d, q, h, od;
  cout << "how many pennies do you have? " << endl;
  cin >> p;
  cout << "how many nickels do you have? " << endl;
  cin >> n;
  cout << "how many dimes do you have? " << endl;
  cin >> d;
  cout << "how many quarters do you have? " << endl;
  cin >> q;
  cout << "how many half-dollars do you have? " << endl;
  cin >> h;
  cout << "How many dollars do you have? " << endl;
  cin >> od;
    
   
  cout << " you have " << p;
  if(p == 1)
    cout << " penny." << endl;
  else
    cout << " pennies." << endl;
  cout << " you have " << n;
  if(n == 1)
    cout << " nickel." << endl;
  else 
    cout << " nickels." << endl;
  cout << " you have " << d;
  if(d == 1)
    cout << " dime." << endl;
  else
    cout << " dimes." << endl;
  cout << " you have " << q;
  if(q == 1)
    cout << " quarter." << endl;
  else
    cout << " quarters." << endl;
  cout << " you have " << h;
  if(h == 1)
    cout << " half-dollar." << endl;
  else
    cout << " half-dollars." << endl;
  cout << " you have " << od;
  if(od == 1)
    cout << " dollar." << endl;
  else
    cout << " dollars." << endl;
  
  double sum = p + n * 5 + d * 10 + q * 25 + h * 50 + od * 100;  


  cout << "The value of all of your coins is $" << sum / 100 << endl;





}


