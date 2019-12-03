#include "Items.h"


Items :: Items ()
{
	setName("Name Unavilabale");
	setPrice(0);
	setStock(0);
}

Items::Items(string name, double price, int stock)
{
	setName(name);
	setPrice(price);
	setStock(stock);
}

void Items::updateStock(int stock)
{
	Istock = Istock - stock;
}

void Items :: setName(string name)
{
	Iname = name;
}

void Items :: setPrice(double price)
{
	Iprice = price;
}

void Items :: setStock(int stock)
{
	const int pstock = stock;
	Istock = pstock;
}

string Items:: getName() const
{
	return Iname;
}

int Items::getStock() const
{
	return Istock;
}

double Items::getPrice() const
{
	return Iprice;
}

double Items::getTotal(int num) const
{
	return num * Iprice;
}
void Items::printItem() const
{
	cout << "--------------------------------------" << endl;
	cout << "Product:                 " << getName();
	cout << "\nPrice:                   " << "$" << getPrice();
	cout << "\nStock:                   " << getStock();

	cout << endl;
}
