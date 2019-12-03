#include <iostream>
#include<string>
#include <conio.h>
#include <vector>
#include "Items.h"
#include "Food.h"
using namespace std;

// This menu is the main menu to fall back on
void menu()
{	
	cout << "MAIN MENU" << endl;
	cout << "--------------------------------------" << endl;
	cout << "1. Search Inventory " << endl;
	cout << "2. Sell Items" << endl;
	cout << "3. Return Items" << endl;
	cout << "4. Add New Items To Inventory" << endl;
	cout << "5. Update Items" << endl;
	cout << "6. Exit" << endl;
	cout << "--------------------------------------" << endl;
}

// This menu is for selecting a categlor based on the 3 food options
void Item_Categlory()
{
	cout << "CATEGLORY MENU" << endl;
	cout << "--------------------------------------" << endl;
	cout << "1. Fruit" << endl;
	cout << "2. Meat and Cheese" << endl;
	cout << "3. Snacks" << endl; 
	cout << "4. Back To Main Menu" << endl;
	cout << "--------------------------------------" << endl;

}

// This update menu is for the items under type name Food
void Update_Menu()
{
	cout << endl;
	cout << "UPDATE MENU" << endl;
	cout << "--------------------------------------" << endl;
	cout << "1. Update Name" << endl;
	cout << "2. Update Price" << endl;
	cout << "3. Update Stock" << endl;
	cout << "4. Update Expiration Day" << endl;
	cout << "5. Update Expiration Month" << endl;
	cout << "6. Update Expiration Year" << endl;
	cout << "7. Back to Category Menu" << endl;
	cout << "--------------------------------------" << endl;
	cout << endl;
}

// This update menu is for the Items uder type Item.
void Update_MenuI()
{
	cout << endl;
	cout << "UPDATE MENU" << endl;
	cout << "--------------------------------------" << endl;
	cout << "1. Update Name" << endl;
	cout << "2. Update Price" << endl;
	cout << "3. Update Stock" << endl;
	cout << "4. Back to Category Menu        " << endl;
	cout << "--------------------------------------" << endl;
	cout << endl;
}

int main()
{
	int select; 
	int cSelect;

	// Vector of objects
	// In order to add new items to an already developed list, I seperated the
	// foot categlories into different vectors

	vector <Food> fruitList;

	fruitList.push_back(Food("Apple", .78, 20, 8, 2, 2019));
	fruitList.push_back(Food("Pear", .48, 20, 2, 2, 2019));
	fruitList.push_back(Food("Grapes", .39, 20, 6, 2, 2019));
	fruitList.push_back(Food("Mango", .32, 20, 8, 2, 2019));
	fruitList.push_back(Food("Cherries", 1.78, 20, 7, 2, 2019));

	vector<Food> mcList;

	mcList.push_back(Food("Turkey", 5.78, 20, 8, 2, 2019));
	mcList.push_back(Food("Ham", 5.98, 21, 8, 2, 2019));
	mcList.push_back(Food("Swiss", 2.48, 30, 8, 2, 2019));
	mcList.push_back(Food("Provolone", 4.34, 10, 8, 2, 2019));
	mcList.push_back(Food("Gouda", 9.78, 10, 8, 2, 2019));

	vector <Items> snackList;

	snackList.push_back(Items("Chips", .99, 10));
	snackList.push_back(Items("Fruit Snacks", .79, 20));
	snackList.push_back(Items("Cookies", 1.29, 25));
	snackList.push_back(Items("Chocolate", .59, 15));
	snackList.push_back(Items("Donut", .89, 21));

	cout << "Initiating user interface...." << endl << endl;

	menu();
	
	cout << "\nPlease enter an option that is indicated by the number to the left: ";
	cin >> select;

	while (select != 6)
	{
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------		
		// If User Selects 1 COMPLETED
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------		

		if (select == 1)
		{
			cout << "\nLoading Categlories..." << endl;
			
			cout << endl;

			Item_Categlory();

			cout << "\nPlease select a categlory: ";
			cin >> cSelect;
			
			while (cSelect != 4)
			{

				if (cSelect == 1)
				{
					// Displays food Items from Fruit section
					vector <Food> ::iterator it;

					for (it = fruitList.begin(); it != fruitList.end(); ++it)
					{
						(*it).printFood();
					}

					// This returns the user to the item category menu after looking at the items
					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 2)
				{
					// Displays food Items from Meat and Cheese section
					vector <Food> ::iterator it;

					for (it = mcList.begin(); it != mcList.end(); ++it)
					{
						(*it).printFood();
					}

					// This returns the user to the item category menu after looking at the items
					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 3)
				{
					// Displays food Items from Snack section
					vector <Items> ::iterator it;

					for (it = snackList.begin(); it != snackList.end(); ++it)
					{
						(*it).printItem();
					}

					// This returns the user to the item category menu after looking at the items
					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;

				}

				else if (cSelect == 4)
				{
					// Retuens to the main menu
					break;
				}

				else
				{
					// Error handling for the Item Category menu
					cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";
					cin >> cSelect;
				}
			}
			
			cout << endl;
			menu(); 
			cout << "\nPlease enter an option that is indicated by the number to the left: ";
			cin >> select;

		}
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------		
		// If User Selects 2: Sell Items PROGRESSING
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------	
		else if (select == 2)

		{
			cout << "\nLoading Categories..." << endl;

			cout << endl;

			Item_Categlory();

			cout << "\nPlease select a category: ";
			cin >> cSelect;

			while (cSelect != 4)
			{
				int fruitSelect;
				int fstock;
				int z;

				if (cSelect == 1)
				{
					// Displays food Items from Fruit section
					vector <Food> ::iterator it;

					for (it = fruitList.begin(); it != fruitList.end(); ++it)
					{
						(*it).printFood();
					}

					cout << endl;
					cout << "ITEM SELECTION MENU" << endl;
					cout << "--------------------------------------" << endl;
					for (int i = 0; i < fruitList.size(); i++)
					{
						cout << i + 1 << ". " << fruitList[i].getName() << endl;

					}
					cout << "--------------------------------------" << endl;
					cout << endl;

					cout << "Enter an item to sell: ";
					cin >> fruitSelect;

					while (fruitSelect < fruitList.size())
					{
						if (fruitSelect > fruitList.size())
						{
							cout << "Error! Input not valid. Please select an item to sell: ";
							cin >> fruitSelect;
						}

						else
						{
							break;
						}
					}

					fruitSelect = fruitSelect - 1;

					cout << "Enter a quantity to sell: ";
					cin >> fstock;

						if (fstock <= fruitList[fruitSelect].getStock())
						{

							z = fruitList[fruitSelect].getStock() - fstock;
							fruitList[fruitSelect].setStock(z);
							
						}

						else
						{
							cout << "Error! Not enough items in stock! Enter a quantity to sell: ";
							cin >> fstock;
						}
				

					// End
					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 2)
				{
					int mcSelect;
					int mcstock;
					int z;

					// Displays food Items from Meat and Cheese section
					vector <Food> ::iterator it;

					for (it = mcList.begin(); it != mcList.end(); ++it)
					{
						(*it).printFood();
					}

					cout << endl;
					cout << "ITEM SELECTION MENU" << endl;
					cout << "--------------------------------------" << endl;
					for (int i = 0; i < mcList.size(); i++)
					{
						cout << i + 1 << ". " << mcList[i].getName() << endl;

					}
					cout << "--------------------------------------" << endl;
					cout << endl;

					cout << "Enter an item to sell: ";
					cin >> mcSelect;

					while (mcSelect < mcList.size())
					{
						if (mcSelect > mcList.size())
						{
							cout << "Error! Input not valid. Please select an item to sell: ";
							cin >> mcSelect;
						}

						else
						{
							break;
						}
					}

					mcSelect = mcSelect - 1;

					cout << "Enter a quantity to sell: ";
					cin >> mcstock;
					
					// Actually decrements the stock
					if (mcstock <= mcList[mcSelect].getStock())
					{

						z = mcList[mcSelect].getStock() - fstock;
						mcList[mcSelect].setStock(z);

					}

					else
					{
						cout << "Error! Not enough items in stock! Enter a quantity to sell: ";
						cin >> mcstock;
					}

					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 3)
				{
					int snackSelect;
					int sstock;
					int z;
					// Displays food Items from Snack section

					vector <Items> ::iterator it;

					for (it = snackList.begin(); it != snackList.end(); ++it)
					{
						(*it).printItem();
					}

					cout << endl;
					cout << "ITEM SELECTION MENU" << endl;
					cout << "--------------------------------------" << endl;
					for (int i = 0; i < snackList.size(); i++)
					{
						cout << i + 1 << ". " << snackList[i].getName() << endl;

					}
					cout << "--------------------------------------" << endl;
					cout << endl;

					cout << "Enter an item to sell: ";
					cin >> snackSelect;

					snackSelect = snackSelect - 1;

					

					cout << "Enter a quantity to sell: ";
					cin >> sstock;

					
						if (sstock <= snackList[snackSelect].getStock())
						{

							z = (snackList[snackSelect].getStock() - (fstock));
							snackList[snackSelect].setStock(z);
						}

						else
						{
							cout << "Error! Not enough items in stock! Enter a quantity to sell: ";
							cin >> sstock;
						}
					

					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;

				}

				else if (cSelect == 4)
				{
					break;
				}

				else
				{
					cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";
					cin >> cSelect;
				}
			}
			menu();
			cout << "\nPlease enter an option that is indicated by the number to the left: ";
			cin >> select;

		}
		
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------		
		// If User Selects 3: Return Items PROGRESSING
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------		

		else if (select == 3)
		{
			cout << "\nLoading Categories..." << endl;

			cout << endl;

			Item_Categlory();

			cout << "\nPlease select a category: ";
			cin >> cSelect;

			while (cSelect != 4)
			{
				int fruitSelect;
				int fstock;
				int z;


				if (cSelect == 1)
				{
					// Displays food Items from Fruit section
					vector <Food> ::iterator it;

					for (it = fruitList.begin(); it != fruitList.end(); ++it)
					{
						(*it).printFood();
					}

					cout << endl;
					cout << "ITEM SELECTION MENU" << endl;
					cout << "--------------------------------------" << endl;
					for (int i = 0; i < fruitList.size(); i++)
					{
						cout << i + 1 << ". " << fruitList[i].getName() << endl;

					}
					cout << "--------------------------------------" << endl;
					cout << endl;

					cout << "Enter an item to return: ";
					cin >> fruitSelect;

					while (fruitSelect < fruitList.size())
					{
						if (fruitSelect > fruitList.size())
						{
							cout << "Error! Input not valid. Please select an item to sell: ";
							cin >> fruitSelect;
						}

						else
						{
							break;
						}
					}

					fruitSelect = fruitSelect - 1;

					cout << "Enter a quantity to return: ";
					cin >> fstock;

					
						if (fstock >= fruitList[fruitSelect].getStock())
						{

							z = fruitList[fruitSelect].getStock() + fstock;
							fruitList[fruitSelect].setStock(z);
						}

						else
						{
							cout << "Error! Too many items in stock! Enter a quantity to return: ";
							cin >> fstock;
						}
					

					// End
					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 2)
				{
					int mcSelect;
					int mcstock;
					int z;

					// Displays food Items from Meat and Cheese section
					vector <Food> ::iterator it;

					for (it = mcList.begin(); it != mcList.end(); ++it)
					{
						(*it).printFood();
					}

					cout << endl;
					cout << "ITEM SELECTION MENU" << endl;
					cout << "--------------------------------------" << endl;
					for (int i = 0; i < mcList.size(); i++)
					{
						cout << i + 1 << ". " << mcList[i].getName() << endl;

					}
					cout << "--------------------------------------" << endl;
					cout << endl;

					cout << "Enter an item to return: ";
					cin >> mcSelect;

					while (mcSelect < mcList.size())
					{
						if (mcSelect > mcList.size())
						{
							cout << "Error! Input not valid. Please select an item to sell: ";
							cin >> mcSelect;
						}

						else
						{
							break;
						}
					}

					mcSelect = mcSelect - 1;

					cout << "Enter a quantity to return: ";
					cin >> mcstock;


					if (mcstock >= mcList[mcSelect].getStock())
					{

						z = mcList[mcSelect].getStock() + fstock;
						mcList[mcSelect].setStock(z);
					}

					else
					{
						cout << "Error! Too many items in stock! Enter a quantity to return: ";
						cin >> fstock;
					}

					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 3)
				{
					int snackSelect;
					int sstock;
					int z;

					// Displays food Items from Snack section

					vector <Items> ::iterator it;

					for (it = snackList.begin(); it != snackList.end(); ++it)
					{
						(*it).printItem();
					}

					cout << endl;
					cout << "ITEM SELECTION MENU" << endl;
					cout << "--------------------------------------" << endl;
					for (int i = 0; i < snackList.size(); i++)
					{
						cout << i + 1 << ". " << snackList[i].getName() << endl;

					}
					cout << "--------------------------------------" << endl;
					cout << endl;

					cout << "Enter an item to return: ";
					cin >> snackSelect;

					cout << "Enter a quantity to return: ";
					cin >> sstock;

			
						if (fstock <= snackList[snackSelect].getStock())
						{

							z = (snackList[snackSelect].getStock() + (fstock));
							snackList[snackSelect].setStock(z);
						}

						else
						{
							cout << "Error! Too many items in stock! Enter a quantity to return: ";
							cin >> sstock;
						}
					

					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;

				}

				else if (cSelect == 4)
				{
					break;
				}

				else
				{
					cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";
					cin >> cSelect;
				}
			}
			menu();
			cout << "\nPlease enter an option that is indicated by the number to the left: ";
			cin >> select;

		}

		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------	
		// If User Selects 4: Adds New Items to Inventory COMPLETED
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------		
		else if (select == 4)
		{
			int cSelect;
			string inputName;
			int inputStock;
			double inputPrice;
			int inputDay;
			int inputMonth;
			int inputYear;


			cout << "\nLoading Categlories..." << endl;

			cout << endl;

			Item_Categlory();

			cout << "\nPlease select a categlory: ";
			cin >> cSelect;

			while (cSelect != 4)
			{
				if (cSelect == 1)
				{
					cout << "\nEnter the name of fruit: ";
					cin >> inputName;

					cout << "\nEnter the stock of fruit: ";
					cin >> inputStock;

					cout << "\nEnter the price of fruit: ";
					cin >> inputPrice;

					cout << "\nEnter the expiration day of food: ";
					cin >> inputDay;
						
					cout << "\nEnter the expiration month of food: ";
					cin >> inputMonth;
											
					cout << "\nEnter the expiration year of food: ";
					cin >> inputYear;

					fruitList.push_back(Food(inputName, inputPrice, inputStock, inputMonth, inputDay, inputYear));
					
					cout << "\nItem Entered..." << endl;

					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 2)
				{
					cout << "\nEnter the name of meat or cheese: ";
					cin >> inputName;

					cout << "\nEnter the stock of meat or cheese: ";
					cin >> inputStock;

					cout << "\nEnter the price of meat or cheese: ";
					cin >> inputPrice;

					cout << "\nEnter the expiration day of meat or cheese: ";
					cin >> inputDay;

					cout << "\nEnter the expiration month of meat or cheese: ";
					cin >> inputMonth;

					cout << "\nEnter the expiration year of meat or cheese: ";
					cin >> inputYear;

					mcList.push_back(Food(inputName, inputPrice, inputStock, inputMonth, inputDay, inputYear));

					cout << "\nItem Entered..." << endl;

					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 3)
				{
					cout << "\nEnter the name of snack: ";
					cin >> inputName;

					cout << "\nEnter the stock of snack: ";
					cin >> inputStock;

					cout << "\nEnter the price of snack: ";
					cin >> inputPrice;


					snackList.push_back(Items(inputName, inputPrice, inputStock));

					cout << "\nItem Entered..." << endl;

					cout << endl;
					Item_Categlory();

					cout << "\nPlease select a categlory: ";
					cin >> cSelect;
				}

				else if (cSelect == 4)
				{
					break;
				}

				else
				{
					cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";
					cin >> cSelect;
				}
			}


			menu();
			cout << "\nPlease enter an option that is indicated by the number to the left: ";
			cin >> select;

		}
		
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------		
		// If User Selects 5: Updates  COMPLETED
		//-----------------------------------------------------------------------------------------------------------------------------------------------------------------		
		else if (select == 5)
		{
			int uSelect;
			int updateItem;
			string updateName;
			double updatePrice;
			int updateStock;
			int updateDay, updateMonth, updateYear;
			Food updateTemp;
			Items updateTempI;


		cout << "\nLoading Categlories..." << endl;

		cout << endl;

		Item_Categlory();

		cout << "\nPlease select a categlory: ";
		cin >> cSelect;

		while (cSelect != 4)
		{
			// Fruit Selection
			if (cSelect == 1)
			{
				vector <Food> ::iterator it;

				for (it = fruitList.begin(); it != fruitList.end(); ++it)
				{
					(*it).printFood();
				}

				cout << endl;
				cout << "ITEM SELECTION MENU" << endl;
				cout << "--------------------------------------" << endl;
				for (int i = 0; i < fruitList.size(); i++)
				{
					cout << i + 1 << ". " << fruitList[i].getName() << endl;

				}
				cout << "--------------------------------------" << endl;
				cout << endl;

				cout << "Select item to update: ";
				cin >> updateItem;

				updateItem = updateItem - 1;

				Update_Menu();

				cout << "Enter Item to update: ";
				cin >> uSelect;

				while (uSelect != 7)
				{
					//Updates Name
					if (uSelect == 1)
					{
						cout << "Update Name: ";
						cin >> updateName;

						fruitList[updateItem].setName(updateName);

						cout << endl;
						Update_Menu();
						
						cout << "Enter Item to update: ";
						cin >> uSelect;

					}
					
					//Update Price
					if (uSelect == 2)
					{
						cout << "Update Price: ";
						cin >> updatePrice;


						while (updatePrice < 0)
						{
							if (updatePrice < 0)
							{
								cout << "Error! Please enter a valid price number: ";
								cin >> updatePrice;
							}

							else
							{
								break;
							}
						}

						fruitList[updateItem].setPrice(updatePrice);
						
						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}
					//Updates Stock
					else if (uSelect == 3)
					{
						cout << "Update Stock: ";
						cin >> updateStock;

						while (updateStock < 0)
						{
							if (updateStock < 0)
							{
								cout << "Error! Please enter a valid stock number: ";
								cin >> updateStock;
							}

							else
							{
								break;
							}
						}

						fruitList[updateItem].setStock(updateStock);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					//Updates ExDay
					else if (uSelect == 4)
					{
						cout << "Update Expiration Day: ";
						cin >> updateDay;

						while (updateDay < 0 || updateDay > 31)
						{
							if (updateDay < 0 || updateDay > 31)
							{
								cout << "Error! Please enter a valid day: ";
								cin >> updateDay;
							}
						}

						fruitList[updateItem].setExDay(updateDay);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					//Updates ExMonth
					else if (uSelect == 5)
					{
						cout << "Update Expiration Month: ";
						cin >> updateMonth;

						while (updateMonth < 0 || updateMonth > 12)
						{
							if (updateMonth < 0 || updateMonth > 12)
							{
								cout << "Error! Please enter a valid month: ";
								cin >> updateMonth;
							}
						}

						fruitList[updateItem].setExMonth(updateMonth);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					//Updates ExYear
					else if (uSelect == 6)
					{
						cout << "Update Expiration Year: ";
						cin >> updateYear;

						while (updateYear < 0)
						{
							if (updateYear < 0)
							{
								cout << "Error! Please enter a valid year: ";
								cin >> updateYear;;
							}

							else
							{
								break;

							}
						}

						fruitList[updateItem].setExYear(updateYear);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}
					// Exits to prev menu
					else if (uSelect == 7)
					{
						break;
					}

					else
					{
						cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";

					}
				}
				
				
				cout << endl;
				Item_Categlory();

				cout << "\nPlease select a categlory: ";
				cin >> cSelect;

			}

			// Meat and Cheese Selection
			if (cSelect == 2)
			{
				vector <Food> ::iterator it;

				for (it = mcList.begin(); it != mcList.end(); ++it)
				{
					(*it).printFood();
				}
				
				cout << endl;
				cout << "ITEM SELECTION MENU" << endl;
				cout << "--------------------------------------" << endl;
				for (int i = 0; i < mcList.size(); i++)
				{
					cout << i + 1 << ". " << mcList[i].getName() << endl;

				}
				cout << "--------------------------------------" << endl;
				cout << endl;

				cout << "Select item to update: ";
				cin >> updateItem;

				updateItem = updateItem - 1;

				Update_Menu();

				cout << "Enter Item to update: ";
				cin >> uSelect;

				while (uSelect != 7)
				{
					//Updates Name
					if (uSelect == 1)
					{
						cout << "Update Name: ";
						cin >> updateName;

						mcList[updateItem].setName(updateName);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;

					}

					//Updates Price
					else if (uSelect == 2)
					{
						cout << "Update Price: ";
						cin >> updatePrice;

						while (updatePrice < 0)
						{
							if (updatePrice < 0)
							{
								cout << "Error! Please enter a valid price: ";
								cin >> updatePrice;
							}

							else
							{
								break;
							}
						}

						mcList[updateItem].setPrice(updatePrice);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					//Updates Stock
					else if (uSelect == 3)
					{
						cout << "Update Stock: ";
						cin >> updateStock;

						while (updateStock < 0)
						{
							if (updateStock < 0)
							{
								cout << "Error! Please enter a valid stock number: ";
								cin >> updateStock;
							}

							else
							{
								break;
							}
						}

						mcList[updateItem].setStock(updateStock);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					//Updates ExDay
					else if (uSelect == 4)
					{
						cout << "Update Expiration Day: ";
						cin >> updateDay;

						while (updateDay < 0 || updateDay > 31)
						{
							if (updateDay < 0 || updateDay > 31)
							{
								cout << "Error! Please enter a valid day: ";
								cin >> updateDay;
							}
						}

						mcList[updateItem].setExDay(updateDay);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					//Updates ExMonth
					else if (uSelect == 5)
					{
						cout << "Update Expiration Month: ";
						cin >> updateMonth;

						while (updateMonth < 0 || updateMonth > 12)
						{
							if (updateMonth < 0 || updateMonth > 12)
							{
								cout << "Error! Please enter a valid month: ";
								cin >> updateMonth;
							}
						}

						mcList[updateItem].setExMonth(updateMonth);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					//Updates ExYear
					else if (uSelect == 6)
					{
						cout << "Update Expiration Year: ";
						cin >> updateYear;

						while (updateYear < 0)
						{
							if (updateYear < 0)
							{
								cout << "Error! Please enter a valid year: ";
								cin >> updateYear;;
							}

							else
							{
								break;
						
							}
						}

						mcList[updateItem].setExYear(updateYear);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					// Exits to prev menu
					else if (uSelect == 7)
					{
						break;
					}

					else
					{
						cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";

					}
				}
				cout << endl;
				Item_Categlory();

				cout << "\nPlease select a categlory: ";
				cin >> cSelect;
			}

			// Snack Selection
			if (cSelect == 3)
			{
				vector <Items> ::iterator it;

				for (it = snackList.begin(); it != snackList.end(); ++it)
				{
					(*it).printItem();
				}
				cout << endl;
				cout << "ITEM SELECTION MENU" << endl;
				cout << "--------------------------------------" << endl;
				for (int i = 0; i < snackList.size(); i++)
				{
					cout << i + 1 << ". " << snackList[i].getName() << endl;

				}
				cout << "--------------------------------------" << endl;
				cout << endl;

				cout << "Select item to update: ";
				cin >> updateItem;

				updateItem = updateItem - 1;

				Update_MenuI();

				cout << "Enter Item to update: ";
				cin >> uSelect;

				while (uSelect != 7)
				{
					//Updates Name
					if (uSelect == 1)
					{
						cout << "Update Name: ";
						cin >> updateName;

						snackList[updateItem].setName(updateName);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;

					}

					// Updates Price
					else if (uSelect == 2)
					{
						cout << "Update Price: ";
						cin >> updatePrice;

						while (updatePrice < 0)
						{
							if (updatePrice < 0)
							{
								cout << "Error! Please enter a valid price: ";
								cin >> updatePrice;
							}

							else
							{
								break;
							}
						}

						snackList[updateItem].setPrice(updatePrice);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}
					
					//Updates Stock
					else if (uSelect == 3)
					{
						cout << "Update Stock: ";
						cin >> updateStock;

						while (updateStock < 0)
						{
							if (updateStock < 0)
							{
								cout << "Error! Please enter a valid stock number: ";
								cin >> updateStock;
							}

							else
							{
								break;
							}
						}

						snackList[updateItem].setStock(updateStock);

						cout << endl;
						Update_Menu();

						cout << "Enter Item to update: ";
						cin >> uSelect;
					}

					// Exits to prev menu
					else if (uSelect == 4)
					{
						break;
					}

					else
					{
						cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";

					}
				}

				cout << endl;
				Item_Categlory();

				cout << "\nPlease select a categlory: ";
				cin >> cSelect;
			}

			if (cSelect == 4)
			{
				break;
			}

			else
			{
				cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";
				cin >> cSelect;
			}
		}

			menu();
			cout << "\nPlease enter an option that is indicated by the number to the left: ";
			cin >> select;
		}

		else
		{
			cout << "Error! invalid input detected. Please please enter an option that is indicated by the number to the left: ";
			cin >> select;
		}

	}

	cout << "\nThank you! Have a nice day!" << endl;


	cout << "\nPress any key to exit...." << endl;
	_getch();
}