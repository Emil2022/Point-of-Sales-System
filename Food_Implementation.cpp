#include "Food.h"
#include "Items.h"


Food :: Food()
{
	setName("Name Unavilabale");
	setPrice(0);
	setStock(0);
	setExDay(0);
	setExMonth(0);
	setExYear(0);
}


Food::Food(string name, double price, int stock, int month, int day, int year)
{
	setName(name);
	setPrice(price);
	setStock(stock);
	setExDay(day);
	setExMonth(month);
	setExYear(year);
}


void Food::setExDay(int day)
{
	ExDay = day;
}

void Food::setExMonth(int month)
{
	ExMonth = month;
}

void Food::setExYear(int year)
{
	ExYear = year;
}

int Food ::getExDay() const
{
	return ExDay;
}

int Food::getExMonth() const
{
	return ExMonth;
}

int Food::getExYear() const
{
	return ExYear;
}

void Food::printFood() const
{
	cout << "--------------------------------------" << endl;
	cout << "Product:                 " << getName();
	cout << "\nPrice:                   " << "$" << getPrice() << " per pound";
	cout << "\nStock:                   " << getStock();
	cout << "\nExpiration Date:         " << getExMonth() << "/" << getExDay() << "/"  << getExYear();
	cout << endl;
}

