/******************************************************************************
* PROGRAMMED BY : Saul Moreno
* STUDENT ID    : 269491
* CLASS         : CS 1C: MW-5:00pm
* ASSIGNMENT 3  : Dynamic Array
*******************************************************************************/
#include <iostream>
#include "header.h"

#define TAX 7.75

struct StoreInventory
{
  std::string equipmentName;
  double price;
  int quantity;
};

namespace variable
{
  const int PROMPT_COL    = 50; // Column size for the cout
	const int RECEIPT_COL   = 23; // Column size for the receipt
	const int INVENTORY_COL = 32; // Column size for the inventory
	const int PRICE_COL     = 7;  // Column size for the price
	int basketShoesAmount; // The # of Nike shoes being bought
	int tShirtAmount;      // The # of T-shirt being bought
	int brooksAmount;      // The # of Brooks shoes being bought
	int asicsAmount;       // The # of Asics shoes being bought
	int shortAmount;       // The # of shorts being bought
	int basketInv;         // Holds the amount of Nike shoes in the inventory
	int tShirtInv;         // Holds the amount of T-shirts in the inventory
	int brooksInv;         // Holds the amount of Brooks shoes in the inventory
	int asicsInv;          // Holds the amount of Asics shoes in the inventory
	int shortInv;          // Holds the amount of shorts in the inventory
	double basketCost;     // Holds the price of Nike shoes
	double tShirtCost;     // Holds the price of
	double brooksCost;     // Holds the price of Brooks shoes
	double asicsCost;      // Holds the price of Asics shoes
	double shortCost;      // Holds the price of shorts
	double amtBeforeTax;   // Holds the amount of the sale before tax
	double taxAmount;      // Stores the amount that was taxed
	double amtAfterTax;    // The total value after tax
}

int main()
{
  
  int ArraySize = 0;
  std::string equipment = "";
  int quantity = 0;
  double price = 0.0;
  std::cout << "How many items will be in the inventory? ";
  std::cin >> ArraySize;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  StoreInventory *inventory;
  inventory = new StoreInventory[ArraySize];

  for(int i = 0; i < ArraySize; i++)
  {
    std::cout << "Input the equipment name: ";
    getline(std::cin, equipment);
    inventory[i].equipmentName = equipment;
    
    std::cout << "Enter the price of the item: ";
    std::cin >> price;
    inventory[i].price = price;

    std::cout << "Enter the quantity of ";
    std::cin >> quantity;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    inventory[i].quantity = quantity;
  }

  std::cout << std::left;
  std::cout << std::setw(variable::RECEIPT_COL) << "Name of Equipment"
            << std::setw(variable::PRICE_COL)   << "Cost" << "Quantity" << std::endl;
  for(int i = 0; i < ArraySize; i++)
  {
    std::cout << std::setw(variable::RECEIPT_COL) << inventory[i].equipmentName 
              << std::setw(variable::PRICE_COL)   << inventory[i].price
              << " " << inventory[i].quantity << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::setw(variable::PRICE_COL)
            << "Enter how many Nike basketball shoes do you want? ";
  std::cin  >> variable::basketShoesAmount;

  std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Under Armour T-shirts do you want? ";
	std::cin  >> variable::tShirtAmount;

	std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Brooks shoes do you want? ";
	std::cin  >> variable::brooksAmount;

	std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Asics running shoes do you want? ";
	std::cin  >> variable::asicsAmount;

	std::cout << std::setw(variable::PROMPT_COL)
	          << "Enter how many Under Armour shorts do you want? ";
	std::cin  >> variable::shortAmount;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << std::endl;
	variable::basketInv = inventory[0].quantity - variable::basketShoesAmount;
	variable::basketCost = inventory[0].price * variable::basketShoesAmount;
	inventory[0].quantity = variable::basketInv;
	std::cout << std::setw(variable::INVENTORY_COL)<< "Nike shoes left in inventory:"
			  << inventory[0].quantity << std::endl;

	variable::tShirtInv = inventory[1].quantity - variable::tShirtAmount;
	variable::tShirtCost = inventory[1].price * variable::tShirtAmount;
	inventory[1].quantity = variable::tShirtInv;
	std::cout << std::setw(variable::INVENTORY_COL) << "T-Shirts left in inventory:"
			  << inventory[1].quantity << std::endl;

	variable::brooksInv = inventory[2].quantity - variable::brooksAmount;
	variable::brooksCost = inventory[2].price * variable::brooksAmount;
	inventory[2].quantity = variable::brooksInv;
	std::cout << std::setw(variable::INVENTORY_COL)
	          << "Brooks shoes left in inventory:" << inventory[2].quantity
			  << std::endl;

	variable::asicsInv = inventory[3].quantity - variable::asicsAmount;
	variable::asicsCost = inventory[3].price * variable::asicsAmount;
	inventory[3].quantity = variable::asicsInv;
	std::cout << std::setw(variable::INVENTORY_COL)
	          << "Asics shoes left in inventory:" << inventory[3].quantity
			  << std::endl;

	variable::shortInv = inventory[4].quantity - variable::shortAmount;
	variable::shortCost = inventory[4].price * variable::shortAmount;
	inventory[4].quantity = variable::shortInv;
	std::cout << std::setw(variable::INVENTORY_COL) << "Shorts left in inventory:"
			  << inventory[4].quantity << std::endl;

	std::cout << std::endl;
	std::cout << "Receipt\n";
	std::cout << std::setw(variable::RECEIPT_COL) << "Nike Shoes"
			  <<  "x" << std::fixed << std::setprecision(2)
	          << variable::basketShoesAmount
			  << " = " << variable::basketCost << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL) << "Under Armour T-shirts"
			  << "x" << std::fixed << std::setprecision(2)
	          << variable::tShirtAmount
			  << " = " << variable::tShirtCost << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL) << "Brooks shoes"
			  <<  "x" << std::fixed << std::setprecision(2)
	          << variable::brooksAmount
			  << " = " << variable::brooksCost << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL)<< "Asics shoes"
			  <<  "x" << std::fixed << std::setprecision(2)
	          << variable::asicsAmount
			  << " = " << variable::asicsCost << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL) << "Under Armour shorts"
			  <<  "x" << std::fixed << std::setprecision(2)
	          << variable::shortAmount
			  << " = " << variable::shortCost << std::endl;

	variable::amtBeforeTax = variable::basketCost + variable::tShirtCost
				               + variable::brooksCost + variable::asicsCost
							   + variable::shortCost;


	std::cout << std::endl;
	std::cout << std::setw(variable::RECEIPT_COL) << "Amount before tax: "
			 << std::fixed << std::setprecision(2) << variable::amtBeforeTax
			 << std::endl;
	variable::taxAmount = (variable::amtBeforeTax * TAX) / 100;
	std::cout << std::setw(variable::RECEIPT_COL) << "Tax: "
			  << std::fixed << std::setprecision(2) << variable::taxAmount
			  << std::endl;
	variable::amtAfterTax = variable::amtBeforeTax + variable::taxAmount;
	std::cout << std::setw(variable::RECEIPT_COL) << "Amount after tax: "
			  << std::fixed << std::setprecision(2) << variable::amtAfterTax
			  << std::endl;
	std::cout << std::right;

  delete []inventory; // Deleting the pointer.

  return 0;
}
