#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "header.h"
#include "experiment_1.cpp"
using namespace std;

int main()
{
  //  Part-1 : Database
  Dish D1(true, "Manchurian", "Starter", "Manchurian is a class of Indian Chinese dishes made by roughly chopping and deep-frying ingredients", 150);
  Dish D2(false, "chicken_handi", "Main_course", "Chicken Handi in a black bowl on a grey towel.", 200);
  Dish D3(true, "Biriyani", "Main_course", "Veg biryani is an aromatic rice dish made with basmati rice, spices & mixed veggies.", 300);
  Dish D4(false, "haleem", "starter", "Haleem is a stew composed of meat, lentils, and pounded wheat made into a thick paste.", 250);
  Dish D5(true, "sheer_khurma", "desert", "Sheer Khurma is an elegant dessert often made during Eid.", 350);
  Dish D6(false, "Mutton_biriyani", "Main_course", "Hyderabadi mutton biryani is a dish made by layering rice over slow cooked mutton gravy.", 400);
  Dish D7(true, "Dal_makhani", "Main_Course", "dal are dried, split pulses that do not require soaking before cooking.", 350);
  Dish D8(true, "Naan", "Main_course", "Naan is a leavened, oven-baked or tawa-fried flatbread", 75);

  Restaurant R1("Quality", 1023, "Hyderabad");
  Restaurant R2("Mehfil", 1223, "Chennai");
  Restaurant R3("Seven_stars", 1123, "Banglore");
  R1.add_Dish(D1);
  R1.add_Dish(D2);
  R1.add_Dish(D3);
  R2.add_Dish(D4);
  R2.add_Dish(D5);
  R2.add_Dish(D6);
  R3.add_Dish(D7);
  R3.add_Dish(D4);
  R3.add_Dish(D8);
  R3.add_Dish(D5);

  User U1(true, "Roy", "2357318935", "Gwalior", "Hello");
  User U2(false, "Rick", "7194582430", "Patna", "World");
  User U3(true, "Morty", "6280180900", "Jaipur", "Helloworld");

  Delivary_Labour L1("Prashanth", "9390026751", true);
  Delivary_Labour L2("Sheaker", "9492189828", false);

  //  Part -2 : Implementation
  while (true)
  {
    int s;
    string usr, pw;
    map<string, User> users;
    users.insert({"roy_user", U1});
    users.insert({"ricky_user", U2});
    users.insert({"morty_user", U3});
    map<string, Restaurant> restaurants;
    restaurants.insert({"Quality", R1})
            restaurants.insert({"Mehfil", R2})
                restaurants.insert({"Seven_stars", R3})
        // we add few restaurants here
        cout
        << "Enter 1 to login, 2 to signin , 3 to exit";
    cin >> s;
    switch (s)
    {
    case 1:
      cout << "Enter the username and password ";
      cin >> usr >> pw;
      if (users[usr] != pw)
      {
        cout << "Wrong password !!!" << endl;
      }
      else
      {
        string rest;
        cout << "enter the anme of the restaurant from which you want to order ";
        cin >> rest;
        Restaurant r = restaurants[rest];
        r.display_Details();
        Cart c;
        int no, pick;
        cout << "Enter the number of dishes to be added into the cart ";
        cin >> no;
        for (int k = 0; k < no; k++)
        {
          cout << "Enter your pick ";
          cin >> pick;
          c.add_dish(pick);
        }
        c.dispaly_BILL();
      }
      break;
    case 2:
      int r;
      string add, nme, ph;
      bool pre;
      cout << "Enter the username and password ";
      cin >> usr >> pw;
      cout << "Enter your name, phone number ";
      cin >> name >> ph;
      cout << "Enter your address ";
      getline(cin, add);
      cout << "enter 1 if your a premium member ,else 0 ";
      cin >> r;
      pre = (r == 1) ? (true
                        : false);
      User u(pre, nme, ph, add, pw);
      users.insert({usr, u});
      break;
    default:
      cout << "Program exited ...";
      exit(0);
      break;
    }
  }
  return 0;
}
