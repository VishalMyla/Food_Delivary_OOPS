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
  L1.display_Detalis();
  //  Part-2 Implementation
  Cart c;
  c.add_dish(0, R1);
  cout << c.Payment();
  return 0;
}
