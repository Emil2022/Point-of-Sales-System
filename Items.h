#include <iostream>
#include <string>
#ifndef ITEMS_H
#define ITEMS_H
using namespace std;

class Items
{
	public:

		Items();
		Items(string name, double price, int stock);

		void setName(string name);
		void setPrice(double price);
		void setStock(int stock);

		void updateStock(int stock);
		
		string getName() const;
		int getStock()const;
		double getPrice() const;

		double getTotal(int n) const;

		void printItem() const;

		int Istock;
		double Iprice;
		string Iname;
	
	
	
	

		
	
};
#endif // !ITEMS_H

