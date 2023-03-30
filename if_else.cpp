#include <iostream>

//This is just a file for my thought process! Go to if_else.cpp for the actual code!

using namespace std;

/**
 * main - Main Function
 * Description: This program will tell you how many days until an item expires and if you get a discount.
 * Return: 0
 */
int main(void)
{
	//variables
	int random_number = rand() % 12;
	int days_until_expiration = random_number;
	int discount_percentage = 0;


	if (days_until_expiration < 0)
	{
		cout << "The item is expired." << endl;
	}
	else if (days_until_expiration == 0)
	{
		cout << "The item expires today." << endl;
	}
	else if (days_until_expiration <= 5)
	{
		cout << "The item expires in " << days_until_expiration << " days." << endl;
		discount_percentage = 10;
	}
	else if (days_until_expiration <= 10)
	{
		cout << "The item expires in " << days_until_expiration << " days." << endl;
		discount_percentage = 5;
	}
	else
	{
		cout << "The item expires in " << days_until_expiration << " days." << endl;
	}

	if (discount_percentage > 0)
	{
		cout << "You will receive a " << discount_percentage << "% discount." << endl;
	}

	return 0;
}
