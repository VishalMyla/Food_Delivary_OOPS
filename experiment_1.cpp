#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "header.h"

Dish ::Dish(bool isVeg, string Dish_name, string Section, string description, int price)
{
  this->isVeg = isVeg;
  this->Dish_name = Dish_name;
  this->Section = Section;
  this->description = description;
  this->price = price;
}
int Dish ::get_price()
{
  return price;
}
void Dish ::get_Details()
{
  cout << "The name of the Dish is : " << Dish_name << endl;
  cout << "Section of the Dish is : " << Section << endl;
  if (isVeg)
  {
    cout << "The Status of the dish is Vegtarian " << endl;
  }
  else
  {
    cout << "The Status of the dish is Non-Vegtarian " << endl;
  }
  cout << "The Price of the dish is : " << price << endl;
  cout << description << endl;
}

void Restaurant ::display_Details()
{
  cout << "The name of the Restaurant is : " << Restaurant_name << endl;
  cout << "The ID of the Restaurant is : " << Restaurant_id << endl;
  cout << "The Address of the Restaurant is : " << Address << endl;
  cout << "The name of the Restaurant is : " << Restaurant_name << endl;
  cout << "The Dishes available in the Restaurant" << endl
       << endl;
  for (int i = 0; i < Array__of_Dishes.size(); i++)
  {
    Array__of_Dishes[i].get_Details();
    cout << endl;
  }
}
void Restaurant ::add_Dish(Dish d)
{
  Array__of_Dishes.push_back(d);
}
string Restaurant ::get_Address()
{
  return Address;
}

// class Restaurant
// {
// public:
//   // Restaurant(string, int, string, int, Dish[10]);
//   void display_Details();
//   void add_Dish();
//   string get_Address();

// private:
//   string Restaurant_name;
//   int Restaurant_id;
//   string Address;
//   int No_Dishes_in_Restaurant;
//   vector<Dish> Array__of_Dishes[10];
// };
int main()
{
  cout << endl
       << "Hello World!! " << endl;
}