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
string Dish ::dish_Name()
{
  return Dish_name;
}
void Restaurant ::display_Details()
{
  cout << "The name of the Restaurant is : " << Restaurant_name << endl;
  cout << "The ID of the Restaurant is : " << Restaurant_id << endl;
  cout << "The Address of the Restaurant is : " << Address << endl;
  cout << "The name of the Restaurant is : " << Restaurant_name << endl;
  cout << "The Dishes available in the Restaurant" << endl
       << endl;
  cout << endl;
  for (int i = 0; i < Array__of_Dishes.size(); i++)
  {
    Array__of_Dishes[i].get_Details();
    cout << endl;
    cout << "Enter " << i << " in the cart if you want to add thid Dish" << endl;
    cout << endl;
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

void Cart ::add_dish(int n)
{
  for (int i = 0; i < Array__of_Dishes.size(); i++)
  {
    if (n == i)
    {
      cout << "You have Picked " << Array__of_Dishes[i].dish_Name() << "in the cart : $" << Array__of_Dishes[i].get_price() << endl;
      Price += Array__of_Dishes[i].get_price();
    }
  }
  GST = add_tax(Price);
  bill = Price + GST;
}
void Cart ::dispaly_BILL()
{
  cout << "The Price of the Dishes Ordered is : $" << Price << endl;
  cout << "The Governament Tax : $" << GST << endl;
  cout << "The Total Amount to be Paid is : $" << bill << endl;
}
int Cart ::Payment()
{
  return bill;
}
// Tax is remainng
// class Cart : public Restaurant
// {
// public:
//   void add_dish(int);
//   void dispaly_BILL();
//   int add_tax(int);

// private:
//   int Price;
//   float GST;
//   float bill;
// };

int main()
{
  cout << endl
       << "Hello World!! " << endl;
}