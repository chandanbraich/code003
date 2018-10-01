#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int state;
  cout << "Select state:" << endl;
  cout << "0 - Michigan" << endl;
  cout << "1 - Ohio" << endl;
  cout << "Choice: ";
  cin >> state;
  switch (state) {
  case 0:
    cout << "Michigan selected" << endl;
    break;
  case 1:
    cout << "Ohio selected" << endl;
  }

  int gasType;
  cout << "Select gas type:" << endl;
  cout << "0 - Regular" << endl;
  cout << "1 - Midgrade" << endl;
  cout << "2 - Premium" << endl;
  cout << "Choice: ";
  cin >> gasType;
  switch (gasType) {
  case 0:
    cout << "Regular selected" << endl;
    break;
  case 1:
    cout << "Midgrade selected" << endl;
    break;
  case 2:
    cout << "Premium selected" << endl;
  }

  double pricePerGallon;
  switch (state) {
  case 0:
    switch (gasType) {
    case 0:
      pricePerGallon = 2.27;
      break;
    case 1:
      pricePerGallon = 2.49;
      break;
    case 2:
      pricePerGallon = 2.7;
    }
    break;
  case 1:
    switch (gasType) {
    case 0:
      pricePerGallon = 2.28;
      break;
    case 1:
      pricePerGallon = 2.46;
      break;
    case 2:
      pricePerGallon = 2.55;
    }
  }

  double mpg;
  cout << "Input mpg: ";
  cin >> mpg;
  double distance;
  cout << "Input travel distance: ";
  cin >> distance;

  cout << fixed << setprecision(2);
  cout << "Your travel cost is $" << distance * pricePerGallon / mpg << endl;

  return 0;
}
