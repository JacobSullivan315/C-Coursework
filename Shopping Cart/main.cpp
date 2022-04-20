#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main()
{

    string name = " ";
    int quantity;
    int price;

    cout << "Item 1" << endl;
    cout << "Enter the item name: " << endl;
    cin >> name;
    cout << "Enter the item price: " << endl;
    cin >> price;
    cout << "Enter the item Quantity: " << endl;
    cin >> quantity;
    ItemToPurchase item1(name, price, quantity);
    item1.SetName(name);
    item1.SetPrice(price);
    item1.SetQuantity(quantity);

    cin.ignore();

    cout << "Item 2" << endl;
    cout << "Enter the item name: " << endl;
    cin >> name;
    cout << "Enter the item price: " << endl;
    cin >> price;
    cout << "Enter the item Quantity: " << endl;
    cin >> quantity;
    ItemToPurchase item2(name, price, quantity);
    item2.SetName(name);
    item2.SetPrice(price);
    item2.SetQuantity(quantity);

    //Display Output.
    cout << "TOTAL COST" << endl;
    //Function calls.
    item1.displayCost();
    item2.displayCost();
    cout << endl;

    cout << "Total: $" << item1.GetPrice() * item1.GetQuantity() + item2.GetPrice() * item2.GetQuantity() << endl;


    return 0;
}