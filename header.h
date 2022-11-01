
#include <string>
#include <vector>
using namespace std;
#ifndef FOOD
#define FOOD
//  1.  Person Class
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
//  2. User Class

class User : public Person
{
public:
  User(bool, string, string, string, string); //
  bool is_perimum();
  string get_address();
  string get_pw(); //

private:
  bool premium;
  string Address;
  string pw; //
};
//  3. Dish class
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

//  4. Restaurant class
class Restaurant
{
public:
  // Restaurant(string, int, string, int, Dish[10]);
  void display_Details();
  void add_Dish(Dish);
  string get_Address();
  vector<Dish> Array__of_Dishes;
  // friend void Cart ::add_dish(int, Restaurant &);

private:
  string Restaurant_name;
  int Restaurant_id;
  string Address;
};

//   5. Cart class
class Cart
{
public:
  void add_dish(int, Restaurant &);

  void dispaly_BILL();
  int add_tax();
  int Payment();

private:
  int Price;
  float GST;
  float bill;
  vector<int> dishes;
};
//  6. Delivary_Labour class

class Delivary_Labour : public Person
{
public:
  bool isavailable();
  void display_Detalis();

private:
  bool isAvailable = true;
};

//  7. Delivary Class

class Delivary
{
public:
  Delivary(string, string, string, int, Delivary_Labour &);
  void dispaly_Details();

private:
  string User_address;
  string Restaurant_address;
  string User_phone_number;
  Delivary_Labour *ptr;
  int Total_Amount;
};
// 8.Delivary_Mangement class
class Delivary_Mangement
{
  Delivary_Labour Alloting_Delivary_Guy();

private:
  vector<Delivary_Labour> Array_Available_Delivary;
};
#endif