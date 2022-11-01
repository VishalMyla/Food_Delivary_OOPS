#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
public:
  Person(string, string);
  string get_number();
  string get_name();

private:
  string name;
  string phonenumber;
};

// 1. User class

class User : public Person
{
public:
  User(bool, string);
  bool is_perimum();
  string get_address();

private:
  bool premium;
  string Address;
};

//  2.Dish class

class Dish
{
public:
  Dish(bool, string, string, string, int);
  int get_price();
  void get_Details();
  string dish_Name();

private:
  bool isVeg;
  int price;
  string Dish_name;
  string Section;
  string description;
};

//  3.Restaurant class

class Restaurant
{
public:
  // Restaurant(string, int, string, int, Dish[10]);
  void display_Details();
  void add_Dish(Dish);
  string get_Address();

private:
  string Restaurant_name;
  int Restaurant_id;
  string Address;

protected:
  vector<Dish> Array__of_Dishes;
};

//   4.Cart Class
class Cart : public Restaurant
{
public:
  void add_dish(int);
  void dispaly_BILL();
  int add_tax(int);
  int Payment();

private:
  int Price;
  float GST;
  float bill;
};

class Delivary_Labour : public Person
{
public:
  void get_discription();
  void set_discription();

private:
  int No_Labour;
};

class Delivary
{
public:
  Delivary(string, string, string, int);
  void dispaly_Details();
  void Allocate_Delivary_Guy(Delivary_Labour);

private:
  string User_address;
  string Restaurant_address;
  string User_phone_number;
  Delivary_Labour *ptr;
  int Total_Amount;
};
class Delivary_Mangement
{
  Delivary_Labour Alloting_Delivary_Guy();

private:
  Delivary_Labour Array_Available_Delivary[10];
};