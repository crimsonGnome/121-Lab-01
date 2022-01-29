#include <iomanip>
#include <iostream>
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

int main() {
  // Initialize variables
  float total;
  float cost;
  float tax;
  const int percentToDecimal = 100;
  float x;
  float& tip = x;
  const float taxAmount = .075;

  // Gather Inputs from users
  cout << "Please input meal cost: ";
  cin >> cost;
  cout << "Please input tip percentage: ";
  cin >> tip;
  // manipulate tip input to get a percent by dviding the tip by 100
  tip = cost * (tip / percentToDecimal);
  // add tax
  tax = cost * taxAmount;
  // add up to get the total
  total = tax + tip + cost;

  cout << "\nRestaurant Bill\n====================\nSubtotal: $" << fixed
       << setprecision(2) << cost << "\nTaxes: $" << fixed << setprecision(2)
       << tax << "\nTip: $" << fixed << setprecision(2) << tip
       << "\n====================\nTotal: $" << fixed << setprecision(2)
       << total << "\n";
  return 0;
}
