#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "header.h"
//  1. Dish WORKING
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

// 2. Restaurant Working

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
    cout << "Enter " << i << " in the cart if you want to add the Dish to the cart" << endl;
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

//  3. Cart  working

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
  GST = add_tax();
  bill = Price + GST;
}
int Cart ::add_tax()
{
  return (18 * Price) / 100;
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

//  4. delivary working

Delivary::Delivary(string User_address, string Restaurant_address, string User_phone_number, int Total_Amount, Delivary_Labour &ptr)
{
  this->User_address = User_address;
  this->Restaurant_address = Restaurant_address;
  this->User_phone_number = User_phone_number;
  this->Total_Amount = Total_Amount;
}
void Delivary::dispaly_Details()
{
  cout << "The Package is Being Ordered BY the Address: " << endl;
  cout << User_address;
  cout << "You can contact them by the Phone number : " << User_phone_number << endl;
  cout << "The Package is Being Delivared from the Address : " << endl;
  cout << Restaurant_address;
  cout << "The Amount Needs to be paid is : " << Total_Amount << endl;
}

// 5. Delivary_Labour WOrking

bool Delivary_Labour ::isavailable()
{
  return isAvailable;
}
void Delivary_Labour ::display_Detalis()
{
  cout << "The Delivary boy Name : " << get_name() << endl;
  cout << "The Delivay boy Phone Number : " << get_number() << endl;
  cout << "The Avaliablity of the Delivay Boy is :" << isAvailable << endl;
}
