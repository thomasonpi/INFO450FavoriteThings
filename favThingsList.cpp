#include <iostream>
#include <string>
#include "favThings.h"
#include "favThingsList.h"
using namespace std;

favThingsList::favThingsList()
{
	numItems = 0;
	totalInventory = 0;
}
void favThingsList::addItem() // uses getFavInput to take user input, check unique
{
	items[numItems].getFavInput();
	for (int i = 0; i< numItems; i ++) 
	{
		if (items[numItems].getName() == items[i].getName())
		{
			cout << "you already put that one in!" << endl << endl;	
		       items[numItems].getFavInput();	
		}
	}
	numItems++;
}
void favThingsList::showList() //uses overloaded insertion to display recipes
{
	for (int i=0; i < numItems; i++)
	{
		cout << "*********" << "recipe " << i+1 << "*********" << endl;
		cout << items[i] << endl;
	}

}
void favThingsList::removeItem(int num) // delete a recipe by writing over
{
	int i = num;
	for (i; i<numItems; i++)
	{
		items[i-1] = items[i];
	}
	numItems -= 1;

}
