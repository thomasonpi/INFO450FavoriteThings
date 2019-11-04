#pragma once
#include <iostream>
#include <string>
#include "favThings.h"
using namespace std;

class favThingsList //wrapper class to handle list of objects
{
	private:
		FavThings items[100];
		int numItems;
		int totalInventory;
	public:
		favThingsList();
		void addItem();
		void showList();
		void removeItem(int num);
};
