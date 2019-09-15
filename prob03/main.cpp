// Sales prediction
#include <iostream>

int main()
{

  double sale;
// What was last year sale's total?
  std::cout << "How much was earned in 2018? $";
  std::cin >> sale;

// Calculate prediction of Sales
  double increase = sale * 0.18;
  long predict = sale + increase;

// Display sale Prediction
  std::cout << "With sales increasing by 18%, this year's sales will be at: $" << predict << '\n';

  return 0;
}
