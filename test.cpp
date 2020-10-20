#include "std_lib_facilities.h"
using namespace std;

int main()
{
  constexpr double usd = 1.00;
  constexpr double yen = 0.0095;
  constexpr double kroner = 0.11;
  constexpr double pound = 1.29;

  double amount = 1;

  char unit = ' ';
  cout << "Please enter an amount followed by a unit (y or k or p):\n";
  cin >> amount >> unit;
  switch(unit) {
    case 'y':
      cout << amount << "yen == " << yen*amount << "dollars\n";
      break;
    case 'k':
      cout << amount << "kroner == " << kroner*amount << "dollars.\n";
      break;
    case 'p':
      cout << amount << "pounds == " << pound*amount << "dollars.\n";
      break;
    default:
      cout << "Sorry, I don't know a unit called " << unit << "\n";
      break;
  }
}
