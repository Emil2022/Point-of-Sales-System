#ifndef FOOD_H
#define FOOD_H
#include <iostream>
#include <string>
#include <iomanip>
#include "Items.h"

class Food : public Items
{
public:
	
	Food();
	Food(string name, double price, int stock, int month, int day, int year);


	// Potential Extra Credit Solution Functions 
	void setExDay(int day);
	void setExMonth(int month);
	void setExYear(int year);

	int getExDay() const;
	int getExMonth() const;
	int getExYear()const;
	
	void printFood() const;

private:
	// Potential Extra Credit Solution Variables
	int ExDay;
	int ExMonth;
	int ExYear;


};
#endif // !FOOD_H