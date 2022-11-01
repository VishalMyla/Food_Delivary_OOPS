#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "header.h"
#include "experiment_1.cpp"
using namespace std;
int main()
{
  while (true)
  {
    int s;
    string usr, pw;
    map<string, User> users;
    map<string, Restaurant> restaurants;
    // we add few restaurants here
    cout << "Enter 1 to login, 2 to signin , 3 to exit";
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
      cin >> nme >> ph;
      cout << "Enter your address ";
      getline(cin, add);
      cout << "enter 1 if your a premium member ,else 0 ";
      cin >> r;
      pre = (r == 1) ? true : false;
      User u(pre, nme, ph, add, pw);
      users.insert({usr, u});
      break;
    default:
      cout << "Program exited ...";
      exit(0);
      break;
    }
  }
}