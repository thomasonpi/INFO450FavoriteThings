
#include <iostream>
#include <string>
#include "favThings.h"
#include "favThingsList.h"
using namespace std;

int main()
{
	favThingsList *myList = NULL;
	myList = new favThingsList[100];
	cout << "************************" << endl;
	cout << "hello and welcome!" <<endl;
	cout << "this program will help you track your favorite recipes" <<endl;
	cout << "************************" << endl;

	// input a recipe
	char goAgain = 'y';
	do{
	myList->addItem();
	cout << "add another object? (y/n) ";
	cin >> goAgain;
	cin.ignore();
	cout << endl;
	}while(goAgain == 'y' || goAgain == 'Y');

	myList->showList();

	// remove a recipe
	char rmItem = 'n';
	cout << "would you like to remove a recipe? (y/n) ";
	cin >> rmItem;
	cin.ignore();
	if (rmItem == 'y' || rmItem == 'Y')
	{
		cout << "which record to remove? ";
		int pick;
		cin >> pick;
		cin.ignore();
		myList -> removeItem(pick);
		
	}

	myList -> showList();
	cout << '\n';
	return 0;
}
