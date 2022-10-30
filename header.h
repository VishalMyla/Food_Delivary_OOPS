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
  vector<Dish> Array__of_Dishes;
};

// 4. Cart class

class Cart
{
public:
  int Restaurant_price();
  int Total_Amount();
  void fill_cart();
  void get_details();

private:
  int Total_Price;
  vector<int> Picked;
  int Delivary_charges;
  int Govt_Tax;
};

// class Delivary_Labour : public Person
// {
// public:
//   void get_discrption();
//   void set_discription();

// private:
//   int No_Labours;
// };

// class Delivary_Management
// {
// };