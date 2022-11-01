#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "header.h"
#include "experiment_1.cpp"
using namespace std;
int main()
{
  Dish D1(false, "Beef", "Main Course", "Most wanted meat in the World!!", 1500);
  cout << D1.get_price();
  return 0;
}