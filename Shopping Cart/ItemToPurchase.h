#pragma once
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;
using namespace std;

class ItemToPurchase {
public:
	ItemToPurchase(string itemName, int itemPrice, int itemQuantity);

	void SetPrice(int);
	void SetQuantity(int);
	void SetName(string);
	int GetPrice();
	string GetName();
	int GetQuantity();
	
	void displayCost();

private:
	string itemName;
	int itemPrice;
	int itemQuantity;
	

};

#endif